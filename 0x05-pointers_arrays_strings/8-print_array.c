#include <stdio.h>

/**
 * print_array - print n elements of an array.
 * @a: array
 * @n: is the number of elements of the array
 *
 * Return: Always 0.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; a[i] < a[n]; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
