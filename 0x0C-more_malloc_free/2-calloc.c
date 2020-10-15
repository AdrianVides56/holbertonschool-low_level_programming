#include "holberton.h"

/**
 * *_calloc - allocates memory of an array
 * @nmemb: memory space to alloc
 * @size:size of nmemb
 * Return: pointer to the allocated memory or NULL if fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *allo;

	if (nmemb == 0 || size == 0)
		return (NULL);
	allo = (char *)malloc(size * nmemb);
	if (allo == NULL)
		return (NULL);

	for (a = 0; allo[a] != '\0'; a++)
	{
		allo[a] = 0;
	}
	return (allo);
}
