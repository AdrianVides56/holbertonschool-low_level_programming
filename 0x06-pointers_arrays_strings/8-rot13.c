#include "holberton.h"

/**
 * *rot13 - encondes a string using rot13
 * @su: string
 * Return: su
 */

char *rot13(char *su)
{
	int a;

	for (a = 0; su[a] != '\0'; a++)
	{
		if ((su[a] >= 'a' && su[a] <= 'm') || (su[a] >= 'A' && su[a] <= 'M'))
		{
			su[a] = su[a] + 13;
		}
		else if ((su[a] >= 'n' && su[a] <= 'z') || (su[a] >= 'N' && su[a] <= 'Z'))
		{
			su[a] = su[a] - 13;
		}
	}
	return (su);
}
