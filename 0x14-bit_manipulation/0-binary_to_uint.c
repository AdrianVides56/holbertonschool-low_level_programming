#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int pown = 0, sum = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		if (b[len] != '0' && b[len] != '1')
			return (0);
	len--;
	while (len >= 0)
	{
		if (b[len] == '1')
			sum += _pow(2, pown);
		len--;
		pown++;
	}
	return (sum);
}
#include "holberton.h"

/**
 * _pow - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: power
 */

unsigned int _pow(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);

	return (x * (_pow(x, y - 1)));
}
