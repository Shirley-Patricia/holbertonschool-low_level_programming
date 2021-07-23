#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * int_index - search for an integer
 * @array: array
 * @size: size of the array
 * @cmp: pointer to the function that compare values
 * Return: always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int j;

	if (size <= 0)
		return (-1);
	if (cmp != NULL && array != NULL)
	{
		i = 0;
		while (i < size)
		{
			j = cmp(array[i]);
			if (j == 1)
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
