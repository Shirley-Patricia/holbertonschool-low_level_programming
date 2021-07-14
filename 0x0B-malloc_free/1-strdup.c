#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - return pointer to a newly allocated space in memory.
 * @str:  string
 *
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *s;
	
	if (str == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{}
	s = malloc(((sizeof(char) * i)+1));
	if (s == 0)
		return (0);
	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}



