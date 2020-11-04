#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: list
 * Return: head node's data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int a = 0;
	listint_t *aux;

	aux = *head;
	if (aux == NULL)
		return (0);

	a = aux->n;
	(*head) = aux->next;

	free(aux);
	return (a);
}
