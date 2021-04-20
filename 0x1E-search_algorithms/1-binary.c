#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);

/**
 * binary_search - searches for a value in a sorted array
 * of integers using the binary search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to look for
 * Return: index where the value is found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0, left = 0, right = size - 1;

	if (!array)
		return (-1);
	while (left <= right)
	{
		print_array(array, left, right + 1);
		mid = (left + right) / 2;
		if (value == array[mid])
			return (array[mid]);
		if (value < array[mid])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}

/**
 * print_array - print an array
 * @array: array to print
 * @start: entry point to print
 * @end: end point ti print
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i = start;

	printf("Searching in array: ");
	while (i < end)
	{
		if (i == end - 1)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
		i++;
	}
	printf("\n");
}
