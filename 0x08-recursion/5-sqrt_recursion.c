#include "holberton.h"

/**
 * _sqrt_recursion - return the square root of a number
 * @n: number to get the root of
 * @count: root
 * Return: count
 */

int check(int n, int count);
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (check(n, 1));
}


/**
 * check - checks for a number that if times it self the result is n
 * @n: number to get the root of
 * @count: root
 * Return: count
 */
int check(int n, int count)
{
	if (n == (count * count))
	{
		return (count);
	}
	else if (n > (count * count))
	{
		return (check(n, count + 1));
	}
	else
		return (-1);
}
