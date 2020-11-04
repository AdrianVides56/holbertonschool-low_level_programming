#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nnod = 0;

	while (h)
	{
		printf("%i\n", h->n);
		nnod++;
		h = h->next;
	}
	return (nnod);
}
