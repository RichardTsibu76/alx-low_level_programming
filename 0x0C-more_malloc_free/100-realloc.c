#include "main.h"
#include <stdlib.h>

/**
 * _realloc - this fuction reallocates memory block
 * @ptr: the pointer
 * @old_size: old mem size
 * @new_size: new mem size to be reallocated
 * Return: returns
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *nptr, *p;
	unsigned int c;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = ptr;
	nptr = malloc(new_size);
	if (nptr == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (nptr);
	}
	if (new_size > old_size)
	{
		for (c = 0; c < old_size; c++)
		{
			nptr[c] = p[c];
		}
	}
	else
	{
		for (c = 0; c < new_size; c++)
		{
			nptr[c] = p[c];
		}
	}
	free(ptr);
	return (nptr);
}
