#include <stdio.h>
/**
* main - print the alpahbet except e and q letters
*
* Return: 0 (Success
*/
int main(void)
{
char al;
al = 'a';
while (al <= 'z')
{
if (al == 'e' || al == 'q')
{
al++;
}
putchar (al);
al++;
}
putchar ('\n');
return (0);	
}
