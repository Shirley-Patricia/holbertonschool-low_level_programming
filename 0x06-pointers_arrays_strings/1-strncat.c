#include "holberton.h"
# include <string.h>
/**
 * _strncat - Concatenates the string2 of n bytes to the end of the string1 .
 * @dest: string1
 * @src: string2
 * @n: maximum bytes of src
 *
 * Return: char*.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i]; i++)
	{}
	for (j = 0; j < n && src[j] != 0; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = 0;
	return (dest);
}
