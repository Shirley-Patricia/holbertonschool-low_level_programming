#include "holberton.h"
/**
* _islower - Checks for lowercase character
* @c: the character to print
*
* Return: Always 1 (Success)
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); }
	return (0);
}
