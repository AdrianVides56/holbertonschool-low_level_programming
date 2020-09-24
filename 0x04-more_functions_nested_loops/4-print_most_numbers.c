#include "holberton.h"

/**
 * print_most_numbers - print numbers from 0 to 9 except 2 and 4
 *
 * Return: 0 (Success)
 */

void print_most_numbers(void)
{
	char num;

	num = '0';

	while (num <= '9')
	{
		_putchar(num);
		num++;
		if (num == '2' || num == '4')
		{
			num++;
		}
	}
	_putchar('\n');
}
