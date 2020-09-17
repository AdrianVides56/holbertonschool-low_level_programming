#include <stdio.h>
/**
* main - print the alpahbet using putchar
*
* Return: 0 (Success
*/
int main(void)
{
char al, AL;
al = 'a';
AL = 'A';
while (al <= 'z')
{
putchar(al);
al++;
}
while (AL <= 'Z')
{
putchar(AL);
AL++;
}
putchar ('\n');
return (0);
}
