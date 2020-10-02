#include "holberton.h"

/**
 * reverse_array - function that reverses the content of an array
 * @a: array
 * @n: number of integers of the array
 */

void reverse_array(int *a, int n)
{
	int c, begin, end;

	n--;
	for (c = 0; c <= n; c ++)
	{
		begin = a[c];
		end = a[n];

		a[c] = end;
		a[n] = begin;
		n--;
	}
}
