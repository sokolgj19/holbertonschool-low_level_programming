#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: The size of the triangle
 *
 * Description: Prints a right-aligned triangle using the `#`
 * character. If size is 0 or less, prints only a new line.
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
		{
			_putchar(' ');
		}
		for (hash = 0; hash < row; hash++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
