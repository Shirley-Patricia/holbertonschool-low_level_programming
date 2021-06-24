#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all natural numbers from n to 98.
 *
 *@n: init varable
 *
 * return: always 0.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("98\n");
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("98\n");
			}
		}
	}
}
