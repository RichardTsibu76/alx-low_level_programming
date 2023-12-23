#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of array for the hash table
 * Return: on success, it points to the newly created h table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int count = 0;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		return (NULL);
	}
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		return (NULL);
	}
	else
	{
		while (count < size)
		{
			ht->array[count] = NULL;
			count++;
		}
	}
	return (ht);
}
