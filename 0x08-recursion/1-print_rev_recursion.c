#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
	{
		return;
	}
	else
	{
		s = s + 1;
		_print_rev_recursion(s);
		_putchar(*s);
	}
		if (*(s - 1) == '\n')
		{
			_putchar (10);
		}
}
