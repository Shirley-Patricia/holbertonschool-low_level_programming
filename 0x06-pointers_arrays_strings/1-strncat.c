#include "holberton.h"

/**
 * _strncat - concatenates two strings, but it will use at most n bytes from src.
 * @dest: string1
 * @src: string2
 * @n: bytes number
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
	int *cad;

	for (i = 0; dest[i]; i++)
	{
	    for (j = 0; src[j] != 0; j++)
			{
			   cad[i + j];
			}
					    }
	cad[i] = 0;
	return (dest);
}
	
