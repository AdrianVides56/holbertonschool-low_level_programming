#include "holberton.h"
#include <stdio.h>

/**
 * main - sum all the multiples of 3 and 5 below 1024
 * Return: 0 Success
 */
int main(void)
{
	int num = 0, sum = 0;

	while (num < 1024)
	{
		if (num % 3 == 0 || num % 5 == 0)
			sum += num;
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
