#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_create - create a hash table.
 * @size: node size
 *
 * Return: a pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	if (size <= 0)
		return (NULL);
	hash = malloc(sizeof(hash_table_t) * 1);
	if (hash == NULL)
		return (NULL);
	hash->array = malloc(sizeof(hash_node_t) * size);
	if (hash->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash->array[i] = NULL;
	return (hash);
}
