#include "main.h"

/**
 * actual_sqrt - Recursively tries to find square root.
 * @n: The number to find the square root of.
 * @i: The current guess.
 *
 * Return: The square root or -1.
 */
int actual_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (actual_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root, or -1 if not found.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}
