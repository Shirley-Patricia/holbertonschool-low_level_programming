#include "holberton.h"
/**
 * print_sign - Print + or 0 or - and return 1 or 0 or -1 respectively.
 * @n:integer variable
 *
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
			return (1); }
	if (n == 0)
	{
		_putchar(48);
			return (0); }
	if (n < 0)
	{
		_putchar(45);
			return (-1); }
	return (0);
}
