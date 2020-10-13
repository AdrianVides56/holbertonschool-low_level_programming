#include "holberton.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,\
 *   which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer to a new string, or NULL if str = NULL
 */

char *_strdup(char *str)
{
	unsigned int s;
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = (char *)malloc(sizeof(char) * atoi(str));

	if (dup == NULL)
		return (NULL);

	for (s = 0; str[s] != '\0'; s++)
	{
		dup[s] = str[s];
	}


	return (dup);
}
