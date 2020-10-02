#include "holberton.h"

/**
 * *rot13 - encondes a string using rot13
 * @su: string
 * Return: su
 */

char *rot13(char *su)
{
	int a, rec;
	char lower[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char upper[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; su[a] != '\0'; a++)
	{
		for (rec = 0; lower[rec] != '\0'; rec++)
		{
			if (su[a] == lower[rec])
			{
				su[a] = upper[rec];
				break;
			}
		}
	}
	return (su);
}
