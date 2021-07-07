#include <stdio.h>

/**
 * print_diagsums - Print the sum diagonals of a square matrix of integers.
 * @a: array
 * @size: array size
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int x;
	int y;
	int sum;
	int sum_2;

	sum = 0;
	sum_2 = 0;
	x = (size * size);
	y = ((size - 1) * size);
	for (i = 0; i < x; i += (size + 1))
	{
		sum += a[i];
	}
	for (j = size - 1; j <= y; j += (size - 1))
	{
		sum_2 += a[j];
	}
	printf("%d, %d\n", sum, sum_2);
}
