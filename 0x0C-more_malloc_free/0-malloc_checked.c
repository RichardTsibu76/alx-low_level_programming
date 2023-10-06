#include "main.h"
#include <stdlib.h>

/**
 *malloc_checked - Allocates memory using funtion
 *@b: this is size in byte
 *Return: void returns nothing
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)

		exit(98);

	return (ptr);
}
