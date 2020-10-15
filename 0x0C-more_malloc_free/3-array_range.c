#include "holberton.h"

/**
 * *array_range - creates an array of integers
 * @min: value of the array
 * @max: value of the array
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int a, *arr;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(sizeof(int) * max);
	if (arr == NULL)
		return (NULL);

	for (a = 0; min < max; a++)
	{
		arr[a] = min;
		min++;
	}
	return (arr);
}
