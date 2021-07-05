#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 * @cad:string
 *
 * Return: Always string.
 */

char *leet(char *cad)
{
	int i;
	int k;
	char mozart[10] = {"aAeEoOtTlL"};
	char num[10] = {"4433007711"};

	for (i = 0; cad[i] != 0; i++)
	{
		for (k = 0; k < 10; k++)
		{
			if (cad[i] == mozart[k])
			{
				cad[i] = num[k]; }
		}
	}
	return (cad);
}
