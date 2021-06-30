#include "holberton.h"

/**
 * puts_half - print half of a string.
 * @str: string
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int n, l, i;

	l = 0;
	while (*(str + l) != '\0')
	{
		l++;
	}
	n = ((l - 1) / 2);
	if (l % 2 == 0)
	{
		for (i = n + 1; *(str + i); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = n + 1; *(str + i); i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
