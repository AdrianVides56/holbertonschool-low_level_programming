#include "holberton.h"

/**
 * more_numbers - print from 0 to 14 ten times
 *
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int num;

	int nl;

	for (nl = 0; nl <= 9; nl++)
	{
		for (num = 0; num <= 14; num++)
	{
		if (num >= 10 && num <= 14)
		{
			_putchar((num / 10) + '0');
		}
		_putchar ((num % 10) + '0');

	}
	_putchar ('\n');
	}
}
