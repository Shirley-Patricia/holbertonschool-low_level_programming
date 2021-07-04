#include "holberton.h"

/**
 * reverse_array - reverse the string of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int j, b;

	j = n - 1;
	for (; j >= n / 2; j--)
	{
		b = a[j];
		a[j] = a[n - j - 1];
		a[n - j - 1] = b;
	}
}
