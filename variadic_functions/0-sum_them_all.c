#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: Number of arguments passed to the function
 * @...: A variable number of integer arguments to sum
 *
 * Return: The sum of all the integers, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int total = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(args, int);
	}
	va_end(args);

	return (total);
}
