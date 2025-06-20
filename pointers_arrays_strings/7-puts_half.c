#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: Pointer to the string
 *
 * Description: If the length is odd, the function prints
 * the last (length + 1) / 2 characters.
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;
	int start;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
