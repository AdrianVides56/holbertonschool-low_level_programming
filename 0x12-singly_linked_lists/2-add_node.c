#include "lists.h"

/**
 * *add_node - adds a new node at then beginning of a list
 * @head: first node of the list
 * @str: new node to add
 * Return: the address of the new element, or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dupstr;
	int lenn;
	list_t *new;

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
	new->next = (*head);
	(*head) = new;

	return (new);
}
