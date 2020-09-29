#include "holberton.h"
#include <string.h>

/**
 * _puts - print a string
 *
 * @str: Is a string
 */

void _puts(char *str)
{
	int prin;

	for (prin = 0; str[prin] != '\0'; prin++)
	{
		_putchar(str[prin]);
	}
	_putchar('\n');
}
