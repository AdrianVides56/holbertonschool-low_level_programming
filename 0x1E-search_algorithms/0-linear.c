#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to look for
 * Return: first index where the value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			break;
		i++;
	}
	if (i == size)
		return (-1);
	return (array[i]);
}
