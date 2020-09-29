#include "holberton.h"

/**
 * puts2 - printevery other character of a string
 *
 * @str: Is a string
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != 0; a = a + 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
