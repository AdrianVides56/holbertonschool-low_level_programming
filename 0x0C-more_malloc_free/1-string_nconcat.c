#include "holberton.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string
 * @s2: string
 * @n: number of bytes of second string to concatenate
 * Return: pointer to the new allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *nasm;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	{}
	for (b = 0; s2[b] != '\0'; b++)
	{}

	nasm = (char *)malloc((a + n) + 1);

	if (nasm == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		nasm[a] = s1[a];
	for (b = 0; s2[b] != '\0'; b++)
	{
		if (b == n)
			break;
		nasm[a++] = s2[b];
	}
	nasm[a] = '\0';
	return (nasm);
}
