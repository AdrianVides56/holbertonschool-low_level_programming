#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints all arguments it receives
 * @argc: count argument
 * @argv: vector argument
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int d;

	if (argc >= 1)
	{
		for (d = 0; d < argc; d++)
		{
			printf("%s\n", argv[d]);
		}
	}

	if (argv)
	{}
	return (0);
}
