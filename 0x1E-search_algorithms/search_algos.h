#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Include necessary libraries */
#include <stdio.h>
#include <stdlib.h>

/* structures used */
/**
 * struct listint_s - singly linked list
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/* Function prototypes */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);

#endif
