#include "holberton.h"

/**
 * _strchr - localate a character in a string.
 * @s: string
 * @c: character
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (i = 0; s[i] != 0; i++)
	{}
	i++;
	for (j = 0; j <= i; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}
