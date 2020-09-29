#include "holberton.h"

/**
 * swap_int - swap the value of two integers
 *
 * @a: is an integer
 * @b: is an integer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = 42;
	*b = c;
}
