#include "3-calc.h"

/**
 * main - do the math of two numbers
 * @argc: number of received arguments
 * @argv: String of received arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int conv1, conv2, p;

	if (argc != 4)    /*Main can only receive 4 arguments*/
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '+' && *argv[2] != '-' &&
	    *argv[2] != '*' && *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/**
	 * convert the second and fourth
	 * character of argv into a integers
	 */
	conv1 = atoi(argv[1]);
	conv2 = atoi(argv[3]);

	p = (*get_op_func(argv[2]))(conv1, conv2);

	printf("%d\n", p);

	return (0);
}
