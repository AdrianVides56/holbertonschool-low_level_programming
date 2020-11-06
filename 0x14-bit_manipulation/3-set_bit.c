#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index of the bit you want to set
 * @n: number
 * Return: 1 if success, or -1 if error ocurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	return (1);
}
