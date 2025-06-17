#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9,
 *                     excluding 2 and 4,
 *                     followed by a new line.
 *
 * You can only use _putchar twice in your code.
 */
void print_most_numbers(void)
{
char number;

for (number = '0'; number <= '9'; number++)
{
	if (number != '2' && number != '4')
	_putchar(number);
}
_putchar('\n');
}
