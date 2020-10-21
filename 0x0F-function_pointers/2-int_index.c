#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to other function
 * Return: -1 if fails or the index of the array that matched
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int check;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);

	for (check = 0; check < size; check++)
	{
		if (cmp(array[check]) != 0)
		return (check);
	}

	return (-1);
}
