#include "holberton.h"

/**
* _abs(int) - print the absolute value of a integer
* @r: integer
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
