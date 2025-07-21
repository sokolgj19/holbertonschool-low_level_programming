#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - Calculates the length of a string
 * @s: The string
 *
 * Return: Length of the string
 */
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup - Duplicates a string using malloc (like strdup)
 * @s: The string to duplicate
 *
 * Return: Pointer to the duplicated string, or NULL if failed
 */
char *_strdup(const char *s)
{
	unsigned int len, i;
	char *copy;

	if (s == NULL)
		return (NULL);

	len = _strlen(s);
	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = s[i];
	copy[i] = '\0';

	return (copy);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the linked list
 * @str: String to duplicate into the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = _strdup(str);
	if (duplicate == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(duplicate);
		return (NULL);
	}

	new_node->str = duplicate;
	new_node->len = _strlen(duplicate);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
