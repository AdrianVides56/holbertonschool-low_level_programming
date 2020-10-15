#include "holberton.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: quantity of memory to alocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allom;


	allom = (void *)malloc(b);

	if (allom == NULL)
		exit(98);

	return (allom);
}
