#include "holberton.h"
#include <string.h>

/**
 * puts2 - printevery other character of a string
 *
 * @str: Is a string
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		{
		_putchar(str[a]);
		}
	}
	_putchar('\n');
}
