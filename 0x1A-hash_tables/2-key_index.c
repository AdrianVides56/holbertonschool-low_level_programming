#include "hash_tables.h"

/**
 * key_index - gives tje index of a key
 * @key: the key
 * @size: size of hash table's array
 * Return: Index at which the key should be stored in the array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
