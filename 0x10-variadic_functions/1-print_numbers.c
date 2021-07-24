#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @n: unsigned integer
 *
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start (num, n);
	for (i = 0; i < n; i ++)
	{
		printf("%d%s", va_arg(num, int), separator);
	}
	va_end(num);
	printf("\n");
}
