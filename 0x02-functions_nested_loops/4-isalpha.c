#include "holberton.h"
/**
* _isalpha - Checks for lowercase and uppercase character
* @c: the character to print
*
* Return: Always 1 (Success)
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); }
	return (0);
}
