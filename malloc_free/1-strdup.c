#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	/* calculate length of input string */
	while (str[len] != '\0')
		len++;

	/* allocate memory for the copy (+1 for null terminator) */
	copy = malloc((len + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);

	/* copy characters from str to copy */
	while (i < len)
	{
		copy[i] = str[i];
		i++;
	}

	copy[i] = '\0'; /* add null terminator */
	return (copy);
}
