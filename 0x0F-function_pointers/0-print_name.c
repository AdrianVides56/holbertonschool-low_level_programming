#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string of name
 * @f: Entry point to other function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
