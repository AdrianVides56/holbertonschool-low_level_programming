#include <stdio.h>

/**
* main - print the alpahbet using putchar
*
* Return: 0 (Success
*/
int main(void)
{
char al;
al = 'a';
while (al <= 'z')
{
putchar(al);
al++;
}
putchar ('\n');
return (0);

}
