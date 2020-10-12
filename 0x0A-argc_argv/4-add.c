#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int check(char *s);

/**
 * main - adds two positive numbers
 * @argc: count argument
 * @argv: vector argument
 * Return: 1 if error or 0 for success
 */

int main(int argc, char *argv[])
{
	int d, sum;

	sum = 0;

	if (argc == 1)
		printf("0");

	if (argc > 1)
	{
		for (d = 1; d < argc; d++)
		{
			if (check(argv[d]) == 1)
			{
				printf("Error\n");
				return (1);
			}
			sum = sum + atoi(argv[d]);
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * check - checks if the characters introduced are not positive numbers
 * @s: string of characters received
 * Return: 0 if are positive numbers or 1 if not
 */
int check(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] < 48 || s[a] > 57)
			return (1);
	}
	return (0);
}
