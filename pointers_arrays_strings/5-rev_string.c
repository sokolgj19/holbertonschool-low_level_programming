#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: The string to reverse
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char temp;

	/* Find the length of the string */
	while (s[i] != '\0')
	{
		i++;
	}

	j = 0;
	i = i - 1;

	/* Swap characters from both ends */
	while (j < i)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		j++;
		i--;
	}
}
