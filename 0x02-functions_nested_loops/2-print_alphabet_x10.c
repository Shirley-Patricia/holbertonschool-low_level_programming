#include "holberton.h"
/**
 * print_alphabet_x10 - Print alphabet 10 times.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int m = 0, n;

	while (m < 10)
	{
		n = 'a';

		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		m++; }
}
