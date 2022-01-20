#include "search_algos.h"

/**
 * binary_search - To searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: search array
 * @size: size of the array
 * @value: values of the array
 *
 * Return: an index
 */

int binary_search(int *array, size_t size, int value)
{
	size_t m, n, i, j;

	if (array == NULL)
		return (-1);

	n = 0;
	j = size - 1;
	while (n <= j)
	{
		printf("Searching in array: ");
		for (i = n; i <= j; i++)
		{
			if (i == j)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		m = (n + j) / 2;
		if (array[m] == value)
			return (m);
		else if (array[m] > value)
			j = m - 1;
		else
		{
			n = m + 1;
		}
	}
	return (-1);
}
