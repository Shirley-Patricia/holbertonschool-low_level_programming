#include "holberton.h"

/**
 * rev_string - Print a string in reverse.
 * @s: text string
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int j, l, b;

	l = 0;
	while (*(s + l) != '\0')
	{
	l++;
	}
	j = l - 1;
	for (; j >= l / 2; j--)
	{
		b = s[j];
		s[j] = s[l - j - 1];
		s[l - j - 1] = b;
	}
}
