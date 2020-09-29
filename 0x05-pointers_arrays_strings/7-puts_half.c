#include "holberton.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int len, half, b1;

	for (len = 0; str[len] != '\0'; len++)
	{}

	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len - 1) / 2;
	}

	b1 = len - half;

	while (str[b1] != 0)
	{
		_putchar(str[b1]);
		b1++;
	}
	_putchar('\n');
}
