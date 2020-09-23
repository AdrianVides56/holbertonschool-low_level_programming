#include "holberton.h"
/**
* print_sign - print a number and its sign
* @n: Is a number
* Return: 0 (Success)
*/

int print_sign(int n)
{
if (n > 48)
{
_putchar ('+');
return (1);
}
else if (n < 48)
{
_putchar ('-');
return (-1);
}
else
{
_putchar ('0');
return (0);
}
_putchar('\n');
}
