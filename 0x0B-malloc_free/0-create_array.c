#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: size of array
 * @c:character
 *
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
