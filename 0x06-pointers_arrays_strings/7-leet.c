#include "holberton.h"

/**
 * *leet - encodes a string into 1337
 * @su: string
 * Return: su
 */

char *leet(char *su)
{
	int a, rl;
	char let[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (a = 0; su[a] != '\0'; a++)
	{
		for (rl = 0; let[rl] != '\0'; rl++)
		{
			if (su[a] == let[rl])
			{
				su[a] = num[rl];
			}
		}
	}
	return (su);
}
