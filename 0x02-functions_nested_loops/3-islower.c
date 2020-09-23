#include "holberton.h"

/**
* _islower - check for lowercase character
* @c: Is a character
* Return: 0 (Success)
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
