#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers passed as arguments
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 if successful, 1 if an argument is not a number
 */
int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
