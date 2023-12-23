#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: size of array for the hash table
 * Return: on success, it points to the newly created h table
 */
sh_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	new_table = malloc(sizeof(hash_table_t));
		return (NULL);
	new_table->size = size;

	new_table->array = malloc(sizeof(void *) * size);
	{
		free(new_table);
		return (NULL);
	}

	return (new_table);
}
