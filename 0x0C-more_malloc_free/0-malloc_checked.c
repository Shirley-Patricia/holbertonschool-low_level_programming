#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: bytes in memory
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	if (b == 0)
		return (NULL);
	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
	}
