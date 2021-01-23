#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with key
 * @ht: hash table to look into
 * @key: key looking for
 * Return: value of the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			break;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (NULL);

	return (tmp->value);
}
