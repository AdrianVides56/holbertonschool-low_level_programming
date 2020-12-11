#include "lists.h"

/**
 * *add_dnodeint_end - adds a new node at the end of a double list
 * @head: pointer to head of the list
 * @n: value of the new node
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	aux = *head;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (aux->next != NULL)
		aux = aux->next;
	aux->next = new;
	new->prev = aux;

	return (new);
}
