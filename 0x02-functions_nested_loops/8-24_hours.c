#include "holberton.h"
/**
 * jack_bauer - print every minutes of the day
 *
 * return: always 0.
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(58);
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar(10);
		}
	}
}
