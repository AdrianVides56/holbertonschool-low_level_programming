#include "holberton.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: string
 * Return: pointer to the byte s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				return (&s[a]);
			}
		}
	}
	return (NULL);
}
