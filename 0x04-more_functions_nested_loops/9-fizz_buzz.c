#include <stdio.h>

/**
* main - FizzBuzz Challenge
*
* Return: 0 (Success)
*/
int main(void)
{

	int num;

	num = 1;

	while (num <= 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz");
			putchar(' ');

		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
			putchar(' ');

		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
			putchar(' ');

		}
		else
		{
			printf("%d", num);
			putchar(' ');

		}
		num++;

	}
	putchar ('\n');
	return (0);
}
