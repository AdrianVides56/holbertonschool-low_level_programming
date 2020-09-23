#include "holberton.h"

/**
* _isalpha - check for alphabetic character
* @c: Is a character
* Return: 0 (Success)
*/

int _isalpha(int c)
{
if (c >= 0 && c <= 255)
{
return (1);
	
}
else
{
return (0);	
}

}
