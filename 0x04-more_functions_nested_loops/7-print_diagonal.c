#include "holberton.h"
/**
 * print_diagonal - Draws diagonal line, n times.
 * @n: number times that printed the diagonal
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
}
