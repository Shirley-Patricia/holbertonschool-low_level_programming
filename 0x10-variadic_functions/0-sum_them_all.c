#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: unsigned integer
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ad;
	unsigned int i;
	int sum;

	va_start(ad, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ad, int);
	}
	va_end(ad);
	return (sum);
}
