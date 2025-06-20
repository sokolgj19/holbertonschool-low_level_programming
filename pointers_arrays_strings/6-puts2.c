#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: Pointer to the string
 *
 * Description: Starts with the first character,
 * then prints every second character, followed by a new line.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		if (str[i] == '\0')
			break;
		i++;
	}
	_putchar('\n');
}
