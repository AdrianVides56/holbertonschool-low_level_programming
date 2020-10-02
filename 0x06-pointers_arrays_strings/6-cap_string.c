#include "holberton.h"

/**
 * *cap_string - Capitalizates all words of a string
 * @su: string
 * Return: su
 */

char *cap_string(char *su)
{
	int a, i;
	char spc[] = {',', ';', '.', '!', '?', '"',
		      '(', ')', '{', '}', ' ', '\n', '\t'};

	if (su[0] >= 'a' && su[0] <= 'z')
	{
		su[0] = su[0] - 32;
	}

	for (a = 0; su[a] != '\0'; a++)
	{
		for (i = 0; spc[i] != '\0'; i++)
		{
			if (su[a] == spc[i] && su[a + 1] >= 'a' && su[a + 1] <= 'z')
			{
				su[a + 1] = su[a + 1] - 32;
			}
		}
	}
	return (su);
}
