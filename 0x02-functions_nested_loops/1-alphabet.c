#include "holberton.h"

/**
* print_alphabet - print the alphaet in lowercase
*
* Return: 0 (Success)
*/

void print_alphabet(void)
{
char al;
al = 97;

while (al <= 122)
{
_putchar(al);
al++;
}

_putchar('\n');
}
