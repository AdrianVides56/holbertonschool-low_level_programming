
#include "holberton.h"

/**
 * print_line - Draws a diagonal line
 * @n: n is the number of times the character \ should be printed
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar ('\n');
	}

	else
	{
		for (a = 1; a <= n; a++)
		{
			for (b = 1; b <= a; b++)
			{
			_putchar (' ');
			}
			_putchar ('\\');
			_putchar ('\n');
		}
	}
}
