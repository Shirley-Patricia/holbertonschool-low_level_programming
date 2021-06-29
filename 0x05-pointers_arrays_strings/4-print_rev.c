#include "holberton.h"

/**
 * print_rev - Print a string in reverse.
 * @s: text string
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i, l, x;

		l = 0;
	while (*(s + l) != '\0')
	{
	l++;
	}
	x = l - 1;
	for (i = x; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
