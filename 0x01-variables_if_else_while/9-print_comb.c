#include <stdio.h>
/**
* main - print all single digits of base 10 with spaces and commas
*
* Return: 0 (Success)
*/
int main(void)
{
char a;
a = 48;

while (a <= 57)
{
putchar (a);
if (a != 57)
{
putchar (',');
putchar (' ');
}
a++;

}
putchar ('\n');
return (0);
}
