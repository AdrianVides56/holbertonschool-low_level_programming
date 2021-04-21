#include "search_algos.h"

int recursion_bs(int *array, size_t left, size_t right, int value);
void print_array(int *array, size_t start, size_t end);

/**
 * advanced_binary - searches for a value in a sorted array
 * of integers using the binary search algorithm (with recursion)
 * @array: the array of integers
 * @size: size of the array
 * @value: the value to look for
 * Return: index where the value is found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (recursion_bs(array, 0, size - 1, value));
}

/**
 * recursion_bs - Does the actual recursion
 * @array: the array of integer
 * @left: start point of array
 * @right: end point of array
 * @value: value to look for
 * Return: index where value id found
 */
int recursion_bs(int *array, size_t left, size_t right, int value)
{
	size_t mid = (left + right) / 2;

	if (right < left)
		return (-1);

	print_array(array, left, right + 1);
	if (array[mid] == value && array[mid - 1] != value)
		return (mid);

	if (array[mid] >= value)
		return (recursion_bs(array, left, mid, value));

	return (recursion_bs(array, mid + 1, right, value));

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
