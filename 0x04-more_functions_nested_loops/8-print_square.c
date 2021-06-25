#include "holberton.h"

/**
 * print_square - Print a square with #.
 * @size: size of the square
 *
 * Return: anyway.
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
