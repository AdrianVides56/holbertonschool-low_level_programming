#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list
 * @head: list
 * @str: new element of the list
 * Return: Adress of new element, or NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dupstr;
	int lenn;
	list_t *new;
	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dupstr = strdup(str);
	if (dupstr == NULL)
	{
		free(new);
		return (NULL);
	}
	for (lenn = 0; str[lenn] != '\0'; lenn++)
		;
	new->str = dupstr;
	new->len = lenn;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (new);
}
