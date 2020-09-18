#include <stdio.h>
/**
* main - print all single digits of base 16
*
* Return: 0 (Success)
*/
int main(void)
{
char a;
a = '0';

while (a <= '9')
{
putchar (a);
if (a < '9')
{
putchar (',');
putchar (' ');
}
a++;

}
putchar ('\n');
return (0);
}
