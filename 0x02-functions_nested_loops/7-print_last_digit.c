#include "holberton.h"
/**
 * print_last_digit - Print last digit of a number.
 * @a: is any number
 *
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	int b;

	b = (a % 10);
	if (b < 0)
	{
		b *= -1;
		_putchar(b + '0');
		return (b);
	}
	else
	{
		_putchar(b + '0');
		return (b);
	}
}
