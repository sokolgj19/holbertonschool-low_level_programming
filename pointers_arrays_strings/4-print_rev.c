#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	i++;

	return (i);
}

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The string to print
 */
void print_rev(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
