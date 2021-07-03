#include "holberton.h"

/**
 * _strcat - Concatenates the second string and the end of the first string .
 * @dest: string2
 * @src: string1
 *
 * Return: char*.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;
	int *cad;

	for (i = 0; dest[i]; i++)
	{
		for (j = 0; src[j]; j++)
			cad[i + j];
	}
	cad[i] = 0;
	return (dest);
}
