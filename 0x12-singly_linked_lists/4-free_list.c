#include "lists.h"

/**
 * free_list - frees a list
 * @head: list
 */

void free_list(list_t *head)
{
	list_t *freeli;

	while (head)
	{
		freeli = head;
		free(freeli->str);
		free(freeli);
		head = head->next;
	}
}
