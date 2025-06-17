#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Description: Uses _putchar to print numbers from 0 to 14
 * 10 times, each followed by a new line. Uses _putchar a
 * maximum of 3 times in the code.
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
