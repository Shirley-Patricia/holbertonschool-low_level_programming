#include "holberton.h"
/**
 * string_toupper - Change lowercase letters of the string to uppercase.
 * @str: string and pointer
 *
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	return (str);
}
