#include "holberton.h"
/**
 * _strcmp - compare two strings.
 * @s1: string1
 * @s2: string2
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;
	int k;

	for (i = 0; s1[i] != 0; i++)
	{}
	for (j = 0; s2[j] != 0; j++)
	{}
	if (i < j || i > j || i == j)
	{
		k = i - j;
	}
	if (k < 0)
	{
		return (-15);
	}
	if (k > 0)
	{
		return (15);
	}
	if (k == 0)
	{
		return (0);
	}
	return (0);
}
