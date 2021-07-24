#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings.
 * @n: unsigned integer
 * @separator: character ','
 *
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *st;

	va_start(str, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			st = va_arg(str, char *);
			if (st == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", st);
				if (i != n - 1)
					printf("%s", separator);
			}
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			st = va_arg(str, char *);
			if (st == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", st);	
			}
		}
	}
	va_end(str);
	printf("\n");
}
