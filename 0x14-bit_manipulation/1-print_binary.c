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
	unsigned long int i;
	int a;

	i = n;
	a = 0;

	if (n == 0)
		_putchar(0);

	while ((i >>= 1) > 0)
		a++;

	while (a >= 0)
	{
		n >>= 1;
		_putchar((n & 1) + '\0');
		a--;
	}
}
