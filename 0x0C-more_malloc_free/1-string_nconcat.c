#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concataned two strings
 * @s1: string 1
 * @s2: string 2
 * @n: integer
 *
 * Return: Always 0 (Success)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	char *str = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	str = malloc(sizeof(char) * (i + n) + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		if (j < n)
		{
			str[i] = s2[j];
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}
