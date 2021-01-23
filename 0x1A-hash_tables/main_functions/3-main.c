#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	hash_table_set(ht, "hetairas", "a");
	hash_table_set(ht, "mentioner", "a1");
	hash_table_set(ht, "heliotropes ", "d");
	hash_table_set(ht, "neurospora", "d1");
	hash_table_set(ht, "depravement ", "f");
	hash_table_set(ht, "serafins", "f1");
	hash_table_set(ht, "stylist ", "e");
	hash_table_set(ht, "subgenera", "e1");
	return (EXIT_SUCCESS);
}
