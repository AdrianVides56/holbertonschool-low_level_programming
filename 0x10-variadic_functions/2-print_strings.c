#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
		separator = "";

	va_list string;

	unsigned int i;
	char *tmp;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		tmp = va_arg(string, char*);
		if (tmp == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", tmp);
		}
		if (i == (n - 1))
		{
			printf("%s", tmp);
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(string);
}
