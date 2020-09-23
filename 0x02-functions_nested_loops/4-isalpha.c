#include "holberton.h"

/**
* _isalpha - check for alphabetic character
* @c: Is a character
* Return: 0 (Success)
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
{
return (1);

}
else
{
return (0);
}

}
