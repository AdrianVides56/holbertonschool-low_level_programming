#include "3-calc.h"


/**
 * get_op_func - match the correct function to execute
 * @s: operator passed as argument
 * Return: pointer to the matched function with the right operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i <= 4)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
