#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_arg - Prints one argument based on the format type
 * @type: The format specifier ('c', 'i', 'f', 's')
 * @args: va_list of arguments
 * @sep: Separator string to print before the argument
 */
void print_arg(char type, va_list args, char *sep)
{
	char *str;

	switch (type)
	{
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			break;
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			break;
		case 's':
			str = va_arg(args, char *);
			printf("%s%s", sep, str ? str : "(nil)");
			break;
	}
}

/**
 * print_all - Prints anything based on the format string
 * @format: String of format specifiers (e.g., "cifs")
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";

	va_start(args, format);

	if (!format)
	{
		printf("\n");
		va_end(args);
		return;
	}

	while (format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's')
		{
			print_arg(format[i], args, sep);
			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}
