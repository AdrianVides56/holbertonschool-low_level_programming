#include "holberton.h"

/**
* _isupper - check for uppercase character
* @c: Is a character
* Return: 0 (Success)
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
