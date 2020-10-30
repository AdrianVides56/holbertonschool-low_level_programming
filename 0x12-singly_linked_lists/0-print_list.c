#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nnod = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		nnod++;
		h = h->next;
	}
	return (nnod);
}
