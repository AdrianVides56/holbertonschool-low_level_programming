#include "holberton.h"

/**
* print_last_digit - print the the last digit of a number
* @ld: number
* Return: 0 (Success)
*/

int print_last_digit(int ld)
{
ld = ld % 10;

if (ld < 0)
{
ld = ld * -1;
}
_putchar(ld + 48);
return (ld);
}
