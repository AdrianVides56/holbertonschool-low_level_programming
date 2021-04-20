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
	size_t jump = sqrt(size), aux = 0, idx = 0;

	if (!array)
		return (-1);
	while (array[jump] < value && idx != 1)
	{
		printf("Value checked array [%ld] = [%d]\n", aux, array[aux]);
		aux = jump;
		jump += sqrt(size);
		if (jump > size - 1)
			idx = 1;

	}
	printf("Value checked array [%ld] = [%d]\n", aux, array[aux]);
	printf("Value found between indexes [%ld] and [%ld]\n", aux, jump);

	if (idx == 1)
	{
		printf("Value checked array [%ld] = [%d]\n", aux, array[aux]);
		return (-1);
	}

	for (idx = aux; idx <= jump; idx++)
	{
		printf("Value checked array [%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			break;
	}
	if (idx >= size)
		return (-1);

	return (array[idx]);
}
