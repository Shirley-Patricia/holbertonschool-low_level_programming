#include "holberton.h"
/**
 * times_table - Prints the table, starting with 0 until 9.
 *
 * return: always 0.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(i * j + '0');
			_putchar(',');
			_putchar(32); }
		{
			_putchar(10); }
	}
}

