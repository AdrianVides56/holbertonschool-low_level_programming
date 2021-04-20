#include "search_algos.h"

void print_array(int *array, size_t start, size_t end);
int p_binary_search(int *array, size_t low, size_t high, int value);

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the exponential search algorithm
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to look for
 * Return: index where the value is found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, end_idx = 0, end_array = size - 1;

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (i > end_array)
		end_idx = size - 1;
	else
		end_idx = i;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, end_idx);

	if (i < end_array)
		end_array = i;
	return (p_binary_search(array, i / 2, end_array, value));
}

/**
 * p_binary_search - searches for a value in a sorted array
 * of integers using the binary search algorithm
 * @array: the array of integers
 * @low: start point of the array
 * @high: end point of the array
 * @value: the value to look for
 * Return: index where the value is found
 */
int p_binary_search(int *array, size_t low, size_t high, int value)
{
	size_t mid = 0/*, aux = high - 1*/;

	if (!array)
		return (-1);
	while (low <= high)
	{
		print_array(array, low, high + 1);
		mid = (low + high) / 2;
		if (value == array[mid])
			return (mid);
		if (value < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
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
