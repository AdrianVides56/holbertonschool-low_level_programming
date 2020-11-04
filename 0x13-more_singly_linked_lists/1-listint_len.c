#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nelements = 0;

	for (nelements = 0; h; nelements++)
	{
		h = h->next;
	}
	return (nelements);
}
