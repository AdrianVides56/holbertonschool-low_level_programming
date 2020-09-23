#include "holberton.h"
/**
* print_sign - print a number and say if is positive, negatice or zero
* @n: Is a number
* Return: 0 (Success)
*/

int print_sign(int n);
{
if (n > '0')
{
_putchar('+');
return (1);
}
else if (n < '0')
}
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
_putchar('\n');
}
