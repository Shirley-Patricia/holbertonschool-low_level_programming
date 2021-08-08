#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: integer number
 * @index: index of a given binary number
 *
 * Return: nothing
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);
	return (1);
	if (index > 8 * (sizeof(n)))
		return (-1);
}
