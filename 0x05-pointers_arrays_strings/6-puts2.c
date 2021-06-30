#include "holberton.h"

/**
 * puts2 - prints character of a string.
 * @str: string
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	int a;

	for (a = 0; (*(str + (2 * a)) != '\0'); a++)
	{
		_putchar(*(str + (2 * a)));
	}
	_putchar('\n');
}
