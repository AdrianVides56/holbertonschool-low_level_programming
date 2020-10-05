#include "holberton.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: destiny string
 * @src: source string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
