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

	if (separator != NULL)
	{
		va_start (num, n);
		for (i = 0; i < n; i ++)
		{
			printf("%d", va_arg(num, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		va_end(num);
		printf("\n");
	}	
}
