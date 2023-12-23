#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table
 * @ht: The hash table
 * Return: it void does not return
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *current, *tmp;

	if (ht == NULL)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		current = ht->array[idx];
		while (current)
		{
			tmp = current;
			current = current->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
