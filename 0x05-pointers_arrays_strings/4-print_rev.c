#include "holberton.h"

/**
 * print_rev - print a string in reverse
 *
 * @s: is a character
 */

void print_rev(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	for (a = a - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
