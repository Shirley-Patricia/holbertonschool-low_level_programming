#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - pritn the binary representation of a number.
 * @n: integer number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	_putchar((n & 1) + '\0');
}
