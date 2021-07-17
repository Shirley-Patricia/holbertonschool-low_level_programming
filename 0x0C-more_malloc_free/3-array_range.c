#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that allocates memory using malloc.
 * @min: an int
 * @max: an int
 * Return: return an int
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	ptr = malloc(sizeof(int) * j);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		if (min <= max)
		{
			ptr[i] = min;
			min++;
		}
	}
	return (ptr);
}
