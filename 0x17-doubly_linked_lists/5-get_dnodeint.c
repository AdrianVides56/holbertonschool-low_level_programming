#include "lists.h"

/**
 * *get_dnodeint_at_index - searches for the nth node of a list
 * @head: pointer to head of the list
 * @index: index of the node to get
 * Return: If index doesn't exist NULL, else nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *aux = head;

	if (head == NULL)
		return (NULL);

	while (aux != NULL)
	{
		if (count == index)
			return (aux);
		aux = aux->next;
		count++;
	}

	return (NULL);
}
