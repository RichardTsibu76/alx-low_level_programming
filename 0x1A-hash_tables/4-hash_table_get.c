#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - A Function that retrieves a value associated with key
 * @ht: The table created
 * @key: Key of the data structure
 * Return: mapped value to key on success else null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *TEMP;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	TEMP = ht->array[index];
	while (TEMP)
	{
		if (strcmp(TEMP->key, key) == 0)
			return (TEMP->value);
		TEMP = TEMP->next;
	}
	return (NULL);
}
