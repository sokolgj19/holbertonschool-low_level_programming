#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string to be printed
 *
 * Description: Starts with the first character,
 * then prints every second character followed by a new line.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
