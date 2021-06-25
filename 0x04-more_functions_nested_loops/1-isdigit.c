#include "holberton.h"
/**
 * _isdigit - check for one digit.
 *@c: integer between 0 and 9
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1); }
	return (0);
}
