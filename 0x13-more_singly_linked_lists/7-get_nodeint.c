#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a linked list
 * @head: list
 * @index: index of the node
 * Return: node in index porsition, or NULL if doesn`t exist that position
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *aux = head;

	if (head == NULL)
		return (NULL);

	while (aux)
	{
		if (count == index)
			return (aux);
		aux = aux->next;
		count++;
	}

	return (NULL);
}
