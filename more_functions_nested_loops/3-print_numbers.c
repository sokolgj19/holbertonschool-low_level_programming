#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Description: Prints digits 0 through 9 followed by a newline.
 *              Uses only two calls to _putchar.
 *
 * Return: void
 */
void print_numbers(void)
{
	char digit;
	for (digit = '0'; digit <= '9'; digit++)
	{	
		_putchar(digit);
	}
	{
		_putchar('\n');
	}
}