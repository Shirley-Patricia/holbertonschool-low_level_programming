#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - deleted a value associated with a key.
 * @ht: hash table
 *
 * Return: node.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int node = 0;
	hash_node_t *aux = NULL;

	for (; node < ht->size; node++)
	{
		while (ht->array[node])
		{
			aux = ht->array[node]->next;
			free(ht->array[node]->key);
			free(ht->array[node]->value);
			free(ht->array[node]);
			ht->array[node] = aux;
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
}
