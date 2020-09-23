#include "holberton.h"

/**
* _abs - print the absolute value of a integer
* @ab: integer
* Return: 0 (Success)
*/

int _abs(int ab)
{
if (ab > 0)
{
return (ab);
}
else if (ab < 0)
{
	return (ab * -1);
}
else
{
return (0);
}
}
