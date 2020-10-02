#include "holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 * Return: -15, 15 or 0
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	return (*s1 - *s2);
}
