#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index of the bit you want to set
 * Return: 1 if success, or -1 if an erroe ocurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n = *n & (~(1 << index));

	return (1);
}
