#include <stdio.h>
/**
* main - print all single digit numbers of base 10 without char variable
*
* Return: 0 (Success)
*/
int main(void)
{
int n;
n = '0';
while (n <= '9')
{
putchar(n);
n++;
}

putchar ('\n');

return (0);
}
