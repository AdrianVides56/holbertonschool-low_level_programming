#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int idx;

	if (ht == NULL)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		while (ht->array[idx])
		{
			tmp = ht->array[idx];
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			ht->array[idx] = ht->array[idx]->next;
		}
	}
	free(ht->array);
	free(ht);
}
