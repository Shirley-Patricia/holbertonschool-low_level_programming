#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string 1
 * @accept: string 2
 *
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int sum;

	sum = 0;
	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (accept[j] == s[i])
			{
				sum = sum + 1;
			}
		}
	}
	return (sum);
}
