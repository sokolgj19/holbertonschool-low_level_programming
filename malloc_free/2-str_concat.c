#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a newly allocated string containing s1 + s2,
 *         or NULL if memory allocation fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculate lengths of s1 and s2 */
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	/* allocate memory for concatenated string + null terminator */
	concat = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	/* copy s1 into concat */
	while (i < len1)
	{
		concat[i] = s1[i];
		i++;
	}

	/* copy s2 into concat after s1 */
	while (j < len2)
	{
		concat[i + j] = s2[j];
		j++;
	}

	concat[i + j] = '\0'; /* null terminate the new string */
	return (concat);
}
