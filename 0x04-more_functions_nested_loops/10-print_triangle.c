#include "holberton.h"
/**
 * print_triangle - Drawn triangle with #.
 * @size: Size of the triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size <= 0)
		_putchar('\n');
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - (a + 1); b++)
			_putchar(' ');
		for (c = 0; c <= a; c++)
		{
			_putchar('#'); }
	_putchar ('\n');
	}
}
