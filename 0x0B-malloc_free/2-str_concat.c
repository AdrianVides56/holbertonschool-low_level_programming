#include "holberton.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: NULL if fail, or concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int a, b;
	char *stl;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
	{}
	for (b = 0; s2[b] != '\0'; b++)
	{}

	stl = (char *)malloc((a + b) * sizeof(char));

	if (stl == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		stl[a] = s1[a];
	for (b = 0; s2[b] != '\0'; b++)
	{
		stl[a++] = s2[b];
	}
	stl[a++] = '\0';
	return (stl);
}
