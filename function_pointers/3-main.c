#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the calculator program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success, error code otherwise.
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((b == 0) && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op_func(a, b));
	return (0);
}
