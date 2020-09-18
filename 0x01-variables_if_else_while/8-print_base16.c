#include <stdio.h>
/**
* main - print all single digits of base 16
*
* Return: 0 (Success)
*/
int main(void)
{
char a, b;

a = 48;
b = 97;

while (a <= 57)
{
putchar (a);
a++;
}
while (b <= 102)
{
putchar (b);
b++;
}
putchar('\n');
return (0);
}
