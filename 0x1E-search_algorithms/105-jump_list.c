#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in a sorted list
 * of integers using the jump search algorithm
 * @list: pointer to the list of integers
 * @size: size of the list
 * @value: the value to look for
 * Return: pointer to where the value is found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *low = NULL, *high = NULL;
	size_t jump = sqrt(size), tmp = 0;

	if (!list)
		return (NULL);
	low = high = list;
	while (high->n < value && high->index + 1 < size)
	{
		for (; high->index < jump; high = high->next)
			if (high->index + 1 == size)
				break;
		tmp = jump;
		printf("Value checked array[%ld] = [%d]\n",
		       high->index, high->n);
		jump += sqrt(size);
	}
	tmp -= sqrt(size);
	for (; low->index < tmp; low = low->next)
		;
	printf("Value found between indexes [%ld] and [%ld]\n",
	       low->index, high->index);
	for (; low->index < high->index && low->index < jump; low = low->next)
	{
		printf("Value checked array[%ld] = [%d]\n", low->index, low->n);
		if (low->n == value)
			return (low);
	}
	printf("Value checked array[%ld] = [%d]\n", low->index, low->n);
	return (NULL);
}
