#include "holberton.h"

/**
 * _memcpy - to copy memory area.
 * @dest: memory area one
 * @src: memory area two
 * @n: bytes to copy in the memory area
 *
 * Return: Always 0.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
