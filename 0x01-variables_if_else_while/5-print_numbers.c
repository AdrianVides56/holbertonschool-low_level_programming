#include <stdio.h>
/**
* main - print all single digit numbers of base 10
*
* Return: 0 (Success)
*/
int main(void)
{
char n;
n = '0';
while (n <= '9')
{
putchar(n);
n++;
}
putchar ('\n');
return (0);
}
