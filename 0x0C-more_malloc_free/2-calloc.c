#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocated memory for an array
 * @size: size of bytes
 * @nmemb: number of elements
 *
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
