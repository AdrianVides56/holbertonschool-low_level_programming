#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator == NULL)
		separator = "";

	va_list print;

	unsigned int i;


	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d\n", va_arg(print, int));
			break;
		}
		printf("%d%s", va_arg(print, int), separator);
	}
}
