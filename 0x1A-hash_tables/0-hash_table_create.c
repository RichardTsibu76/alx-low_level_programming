#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of array for the hash table
 * Return: on success, it points to the newly created h table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i = 0;

	if (size == 0)
		return (NULL);
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	hash_table->array = malloc(sizeof(hash_table_t *) * size);
		if (hash_table->array == NULL)
		{
			return (NULL);
		}

	for (i = 0; i != size; i++)
	{
		hash_table->array[i] = NULL;
	}
	hash_table->size = size;
	return (hash_table);
}
