#include "lists.h"

/**
 * sum_listint - summ all the data of a linked list of numbers
 * @head: list
 * Return: Result of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *aux = head;

	if (head == NULL)
		return (0);
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
