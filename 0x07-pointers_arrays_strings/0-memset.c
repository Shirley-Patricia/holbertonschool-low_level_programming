#include "holberton.h"

/**
 * _memset - fills memory with a constant byte.
 * @b: constant byte  
 * @n: bytes number
 *
 * Return: Always 0.
 */

char *_memset(char *s, char b, unsigned int n)
{
  int i;
  for (i = 0; i < n; i++)
    {
      if (i % 10)
	 _putchar(10);
      if (!(i % 10))
	_putchar(\n)
    }
  return (s)
}
