#include "holberton.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destiny string
 * @src: source string
 * @n: number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{}
	for (b = 0; src[b] != '\0'; b++)
	{
		if (b < n)
		{
			dest[a++] = src[b];
		}
	}
	dest[a] = '\0';
	return (dest);
}
