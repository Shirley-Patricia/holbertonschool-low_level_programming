#include "main.h"

/**
 * flip_bits - return bits that need to flip to get from one number to another.
 * @n: integer number
 * @m: integer number
 *
 * Return: nothing
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int y;
	int count = 0;

	y = (sizeof(n) * 8 - 1);
	if (n == 0 && m == 0)
	{
		return (0);
	}
	y = n ^ m;
	while (y > 0)
	{
		count++;
		y &= (y - 1);
	}
	return (count);
}
