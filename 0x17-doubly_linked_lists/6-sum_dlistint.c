#include "lists.h"

/**
 * sum_dlistint - sums all the data of a list of integers
 * @head: pointer to tehe head of the list
 * Return: the sum of the elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (aux != NULL)
	{
		sum += aux->n;
		aux = aux->next;
	}

	return (sum);
}
