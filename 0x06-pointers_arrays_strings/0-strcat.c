#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a++] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
