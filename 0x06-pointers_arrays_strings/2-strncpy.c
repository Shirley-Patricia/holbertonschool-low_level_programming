#include "holberton.h"

/**
 * _strncpy - copies a string in long array.
 * @dest: string 1
 * @src: string 2
 * @n: lenght of s1
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != 0; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = 0;
	return (dest);
}
