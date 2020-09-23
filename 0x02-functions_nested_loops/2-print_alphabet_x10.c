#include "holberton.h"

/**
* print_alphabet_x10 - print the alphaet in lowercase ten times
*
* Return: 0 (Success)
*/

void print_alphabet_x10(void)
{
char al;
int nl;

for (nl = 0; nl <= 9; nl++)
{
for (al = 97; al <= 122; al++)
{
_putchar (al);
}
_putchar ('\n');

}
}
