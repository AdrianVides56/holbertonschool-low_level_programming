#include <stdio.h>

/**
* main - make a permutation of 2 digits
*
* Return: 0 (Success)
*/

int main(void)
{
int a;
int b;
a = '0';

while (a <= '8')
{
b = a + 1;
while (b <= '9')
{
putchar(a);
putchar(b);
if (a == '8' && b == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
b++;
}
a++;
}
return (0);
}
