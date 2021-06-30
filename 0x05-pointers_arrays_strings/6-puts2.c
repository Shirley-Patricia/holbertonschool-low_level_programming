#include "holberton.h"

/**
 * puts2 - prints character of a string.
 * @str: string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int a, l;

	l = 0;
	while (*(str + l))
	{
		l++;
	}
	for (a = 0; a < l; a++)
	{
		if (a % 2 == 0)
			_putchar(str[a]);
	}
	_putchar('\n');
}
