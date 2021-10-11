#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key you are looking for
 *
 * Return: node.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *entry;

	index = key_index((unsigned char *)key, ht->size);

	entry = ht->array[index];
	if (entry == NULL || key == NULL)
		return (NULL);

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			return (entry->value);
		}
		/*follow  to next key if available*/
		entry = entry->next;
	}
	/*arrive here meaning that there were >= 1 entries and not key match*/
	return (NULL);
}
