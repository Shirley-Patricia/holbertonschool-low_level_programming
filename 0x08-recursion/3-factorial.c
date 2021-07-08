#include "holberton.h"

/**
 * factorial - return factorial of a number.
 * @n: integer number
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
