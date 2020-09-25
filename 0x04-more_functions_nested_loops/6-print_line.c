#include "holberton.h"

/**
 * print_line - Draws a straight line
 * @n: n is the number of times the character _ should be printed
 * Return: 0 (Success)
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar ('\n');
	}

	else
	{
		for (a = 0; a < n; a++)
		{
		_putchar ('_');
		}
		_putchar ('\n');
	}
}
