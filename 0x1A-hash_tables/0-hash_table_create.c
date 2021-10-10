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
	/*allocate table*/
	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
	{
		free(hash);
		return (NULL);
	}
	/*allocate table array*/
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free (hash);
		return (NULL);
	}
	/**/
	hash->size = size;
	for (i = 0; i < size; ++i)
		hash->array[i] = NULL;
	return (hash);
}
