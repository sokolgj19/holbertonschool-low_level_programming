#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements to print
 *
 * Description: Elements are printed in the same order,
 * separated by comma and space. No comma after the last number.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
