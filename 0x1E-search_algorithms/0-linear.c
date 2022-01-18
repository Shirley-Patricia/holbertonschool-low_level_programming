#include "search_algos.h"

/**
 * linear_search - To search for a value in an array of integers using the Linear search algorithm.
 * @array: search array
 * @size: size of the array
 * @value: values of the array
 * 
 * Return: an index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return(i);
	}	
	return (-1);
}
