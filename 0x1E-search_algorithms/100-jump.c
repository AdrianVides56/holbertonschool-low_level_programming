#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array
 * of integers using the jump search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to look for
 * Return: index where the value is found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0, aux = 0, idx = 0;

	if (!array || value < 0)
		return (-1);
	if (value == 0)
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
	while (array[jump] < value && idx != 1)
	{
		if (jump >= size - 1)
		{
			idx = 1;
		}
		aux = jump;
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		jump += sqrt(size);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", aux, jump);
	if (idx != 0 || (array[aux] > value && array[jump] > value))
	{
		printf("Value checked array[%ld] = [%d]\n", aux, array[aux]);
		return (-1);
	}
	for (idx = aux; idx <= jump; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
