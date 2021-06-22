#include "holberton.h"
/**
 * print_last_digit - Print last digit of a number.
 * @a: is any number
 *
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	a = (a % 10);
	if (a <= 10)
	{
		a *= -1;
	}
	return (a);
}
