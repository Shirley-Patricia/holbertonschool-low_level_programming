#include "holberton.h"
# include <stdlib.h>
/**
 * str_concat - Concatenates two strings with malloc .
 * @s1: string1
 * @s2: string2
 *
 * Return: char*.
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *dest;

	if (s1 == NULL)
		{
			s1 = "";
		}
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	{}
	for (j = 0; s2[j]; j++)
	{}
	dest = malloc(sizeof(char) * (i + j) + 1);
	if (dest == NULL)
	{
		return (0);
	}
	for (i = 0; s1[i]; i++)
	{
		dest[i] = s1[i];
	}
	for (j = 0; s2[j]; j++)
	{
		dest[i + j] = s2[j];
	}
	dest[i + j] = 0;
	return (dest);
}