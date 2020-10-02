#include "holberton.h"

/**
 * *string_toupper - change lowercase letters to uppercase
 * @su: string
 * Return: su
 */

char *string_toupper(char *su)
{
	int a;

	for (a = 0; su[a] != '\0'; a++)
	{
		if (su[a] >= 'a' && su[a] <= 'z')
		{
			su[a] = su[a] - 32;
		}
	}
	return (su);
}
