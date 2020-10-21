#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter\
 *                   on each element of an array.
 * @array: array
 * @size: size of the array
 * @action: pointer to other function to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	if (array == NULL || action == NULL)
		return;

	for (count = 0; count < size; count++)
		action(array[count]);
}
