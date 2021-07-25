#ifndef _FUNC_H
#define _FUNC_H
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - function that print char.
 * @any: character
 * 
 * Return: nothing.
 */

void print_char(va_list any)
{
	printf("%c", va_arg(any, int));
}

/**
 * print_int - function that print integer.
 * @any: integer
 * 
 * Return: nothing.
 */

void print_int(va_list any)
{
	printf("%d", va_arg(any, int));
}

/**
 * print_float - function that print float number.
 * @f: character
 * 
 * Return: nothing.
 */

void print_float(va_list any)
{
	printf("%f", va_arg(any, double));
}

/**
 * print_string - function that print string.
 * @s: string
 * 
 * Return: nothing.
 */

void print_string(va_list any)
{
	char *str;

	str = va_arg(any, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
#endif
