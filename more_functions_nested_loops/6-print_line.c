#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Number of times the character _ should be printed
 *
 * Description: Uses _putchar to print a line of underscores.
 *              If n <= 0, only a newline is printed.
 */
void print_line(int n)
{
    int i;

    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    for (i = 0; i < n; i++)
    {
        _putchar('_');
    }
    _putchar('\n');
}
