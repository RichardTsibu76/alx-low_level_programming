#include "hash_tables.h"

/**
 * key_index - Gives array indx
 * @key: The key pair to value
 * @size: Lenght of array of pointers
 * Return: index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
