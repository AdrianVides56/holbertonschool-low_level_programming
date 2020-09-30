#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print elements of an array
 * @a: integers
 * @n: number of elements of the array
 */

void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c != (n - 1))
		{
		putchar (',');
		putchar (' ');
		}
	}
	putchar ('\n');
}
