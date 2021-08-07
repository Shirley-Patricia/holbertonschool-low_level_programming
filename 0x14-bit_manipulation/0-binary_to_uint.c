#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - convert binary number to an unsigned int.
 * @b: binary string
 *
 * Return: a value
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int i;

	sum = 0;
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		sum <<= 1;
		sum += b[i] - '0';
	}
	return (sum);
}
