#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add/update the key/value
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp = NULL, *new_node = malloc(sizeof(hash_node_t));
	unsigned long int index = 0;

	if (ht == NULL || key == NULL || new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, new_node->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
		else
		{
			tmp->value = strdup(new_node->value);
			free(new_node->value);
			free(new_node->key);
			free(new_node);
		}
	}
	else
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	return (1);
}
