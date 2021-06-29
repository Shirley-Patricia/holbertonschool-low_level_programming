#include "holberton.h"

/**
 * swap_int - Interchange numbers.
 * @a: integer
 * @b: integer
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
