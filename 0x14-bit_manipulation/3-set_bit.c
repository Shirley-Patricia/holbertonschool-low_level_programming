#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: integer number
 * @index: index of a given binary number
 *
 * Return: nothing
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (1 << index);
	return (1);
	if (index > 8 * (sizeof(n)))
		return (-1);
}