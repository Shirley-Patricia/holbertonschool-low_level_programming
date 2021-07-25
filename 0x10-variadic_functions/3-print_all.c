#include "variadic_functions.h"
#include "3-func.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - function that prints strings.
 * @format: struct
 *
 * Return: nothing.
 */

void print_all(const char *const format, ...)
{
	va_list any;
	int i;
	char *sep = "";

	format_t p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL},
	};

	va_start(any, format);
	if (format)
	{
		i = 0;

		while (format[i] != '\0')
		{
			int j = 0;

			while (p[j].form != NULL)
			{
				if (format[i] == *(p[j].form))
				{
					printf("%s", sep);
					p[j].print(any);
					sep = ", ";
				}
			}
			j++;
		}
		i++;
	}
	va_end(any);
	printf("\n");
}
