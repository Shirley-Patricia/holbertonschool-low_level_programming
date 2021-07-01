#include "holberton.h"

/**
 * _strcpy - copies the string 2 in the string 1.
 * @dest: string 1
 * @src: string 2
 *
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
