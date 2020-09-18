#include <stdio.h>

/**
* main - print the alpahbet using putchar
*
* Return: 0 (Success
*/
int main(void)
{
char al;
al = 'z';
while (al >= 'a')
{
putchar(al);
al--;
}

putchar ('\n');
return (0);
}
