#include "holberton.h"

/**
 * _puts_recursion - print a string followd by a new line
 * @s: string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
	}
	else
	{
		_putchar(*s);
		s = s + 1;
		_puts_recursion(s);
	}
}
