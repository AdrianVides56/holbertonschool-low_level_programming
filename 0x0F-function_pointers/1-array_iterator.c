#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter\
 *                   on each element of an array.
 * @array: array
 * @size: size of the array
 * @action: pointer to other function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (array == NULL || action == NULL)
		return;
	if (size <= 0)
		return;

	for (count = 0; array[count] < array[size]; count++)
	{
		action(array[count]);
	}
}
