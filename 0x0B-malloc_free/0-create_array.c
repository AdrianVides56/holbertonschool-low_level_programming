#include "holberton.h"

/**
 * *create_array - creates an array of chars, and\
 *  initializes it with a specefic char
 * @size: size of the array
 * @c: assigned character to the array
 * Return: NULL if size is 0, or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int d;

	if (size <= 0)
		return (NULL);
	a = malloc(sizeof(unsigned int) * size);
	if (a == NULL)
		return (NULL);
	for (d = 0; d != size; d++)
	{
		a[d] = c;
	}
	return (a);
}
