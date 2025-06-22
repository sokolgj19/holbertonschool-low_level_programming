#include <stdio.h>

/**
 * leet - Encodes a string into 1337.
 * Letters a/A -> 4, e/E -> 3, o/O -> 0, t/T -> 7, l/L -> 1
 * @str: The string to encode
 *
 * Return: Pointer to the modified string
 */
char *leet(char *str)
{
	char letters[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char replacements[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replacements[j];
				break;
			}
		}
	}

	return (str);
}
