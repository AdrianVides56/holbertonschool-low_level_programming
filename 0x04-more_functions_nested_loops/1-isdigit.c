#include "holberton.h"

/**
 * _isdigit - check for a digit
 * @c: Is a character
 * Return: 0 (Success)
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
