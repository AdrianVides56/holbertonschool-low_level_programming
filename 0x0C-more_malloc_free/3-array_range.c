#include "holberton.h"

/**
 * *array_range - creates an array of integers
 * @min: minimim value of the array
 * @max: maximum value of the array
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int a, *arr;

	if (min > max)
		return (NULL);

	arr = (int *)malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
	{
		arr[a] = min++;
	}
	return (arr);
}
