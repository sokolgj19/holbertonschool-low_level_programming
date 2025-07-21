#include "lists.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string
 * @s: Input string
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
 * _strdup - Duplicates a string using malloc
 * @s: String to duplicate
 *
 * Return: Pointer to new string or NULL
 */
char *_strdup(const char *s)
{
	unsigned int i, len;
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
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to duplicate and add
 *
 * Return: Address of the new node, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current;
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
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}
