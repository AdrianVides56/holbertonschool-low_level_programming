#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list
 */
void free_listint(listint_t *head)
{
	listint_t *freelist;

	while (head)
	{
		freelist = head->next;
		free(head);
		head = freelist;
	}
}
