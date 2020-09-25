#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print from n to 98 ten times
 * @n: n is the starting point number
 * Return: 0 (Success)
 */

void print_to_98(int n)
{
while (n > 98)
{
	printf("%d", n);
	putchar(',');
	putchar(' ');
	n--;
	if (n == 98)
	{
		printf("98");
		putchar('\n');
		break;
	}
}
while (n < 98)
{
	printf("%d", n);
	putchar(',');
	putchar(' ');
	n++;
	if (n == 98)
	{
		printf("98");
		putchar('\n');
		break;
	}
}

}
