#include "holberton.h"
/**
 * print_line - Draws a straight line.
 * @n: number of times tha character is printed.
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n'); }
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
