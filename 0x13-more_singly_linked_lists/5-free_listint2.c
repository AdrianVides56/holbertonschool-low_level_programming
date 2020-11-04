#include "lists.h"

/**
 * free_listint2 - frees a list and sets the fead to NULL
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head)
	{
		while (*head)
		{
			aux = (*head)->next;
			free(*head);
			(*head) = aux;
		}
		(*head) = NULL;
	}
}
