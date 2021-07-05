#include "holberton.h"

/**
 * cap_string - Capitalize all words of a string.
 * @str: string
 *
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 33 || str[i] == ' ' || str[i] == 46)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = (str[i + 1] - 32);
		}
		if (str[i] == 59 || str[i] == 10 || str[i] == 123 || str[i] == 125)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = (str[i + 1] - 32);
		}
		if (str[i] == 9 || str[i] == 40 || str[i] == 41 || str[i] == 63)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = (str[i + 1] - 32);
		}
		if (str[i] == 44 || str[i] == 34)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = (str[i + 1] - 32);
		}
	}
	return (str);
}
