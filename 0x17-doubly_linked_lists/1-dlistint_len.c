#include "lists.h"

/**
 * dlistint_len - function to know the number of elements in a linked list
 * @h: pointer to head of the list
 * Return: number of elemens
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
