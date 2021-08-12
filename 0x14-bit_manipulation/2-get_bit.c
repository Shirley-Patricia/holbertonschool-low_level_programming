#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - pritn the binary representation of a number.
 * @n: integer number
 * @index: index of a given binary number
 *
 * Return: nothing
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 8 * (sizeof(n)))
	{
		return (-1);
	}
	bit = (n >> index) & 1;
	return (bit);
}
