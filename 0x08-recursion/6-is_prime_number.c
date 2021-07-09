#include "holberton.h"

/**
 * primo - prime number.
 * @x: integer number
 * @y: integer number
 *
 * Return: Always 0.
 */

int primo(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (primo(x, (y + 1)));
}

/**
 * is_prime_number - print prime number.
 * @n: integer number
 *
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n == 1 || n <= 0)
	{
		return (0);
	}
	return (primo(n, 2));
}
