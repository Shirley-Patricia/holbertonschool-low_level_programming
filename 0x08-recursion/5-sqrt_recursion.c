#include "holberton.h"

/**
 * raiz - square root.
 * @x: integer
 * @y: integer
 *
 * Return: Always 0.
 */

int raiz(int x, int y)
{
	int root;

	root = (y * y);

	if (x == root)
	{
		return (y);
	}
	if (root > x)
	{
		return (-1);
	}
	return (raiz(x, y + 1));
}


/**
 * _sqrt_recursion - square root of a number.
 * @n: integer number
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n == 0)
	{
		return (0);
	}
	return raiz(n, 2);
}
