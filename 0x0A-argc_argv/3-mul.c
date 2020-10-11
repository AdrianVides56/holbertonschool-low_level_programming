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
	int d, mul;

	mul = 1;

	if (argc <= 2 )
	{
		printf("Error\n");
		return (1);
	}
		for (d = 1; d < argc; d++)
		{
			mul = mul * atoi(argv[d]);
		}
		printf("%d\n", mul);
	return (0);
}
