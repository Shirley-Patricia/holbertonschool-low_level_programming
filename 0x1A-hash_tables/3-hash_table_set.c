#include "hash_tables.h"
#include <stdlib.h>

/**
 * ht_pair - create node
 * @key: key
 * @value: value pair key:value
 *
 * Return: node.
 */

hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *entry;

	/*allocate the entry*/
	entry = malloc(sizeof(entry) * 1);
	if (entry == NULL)
		return (NULL);
	entry->key = malloc(strlen(key) + 1);
	if (entry->key == NULL)
		return (NULL);
	entry->value = malloc(strlen(value) + 1);
	if (entry->value == NULL)
		return (NULL);

	/*copy key and value in a place*/
	strcpy(entry->key, key);
	strcpy(entry->value, value);

	entry->next = NULL;
	return (entry);
}

/**
 * hash_table_set - function adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value pair key:value
 *
 * Return: nothing.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *entry;
	hash_node_t *aux;

	if (ht == NULL)
		return (0);
	if (key == NULL || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	entry = ht->array[index];


	while (entry != NULL)
	{
		/*chek key*/
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			if (entry->value == NULL)
				return (0);
			strcpy(entry->value, value);
			return (1);
		}
		entry = entry->next;
	}
	aux = ht_pair(key, value);
	if (aux == NULL)
		return (0);
	aux->next = ht->array[index];
	ht->array[index] = aux;
	return (1);
}
