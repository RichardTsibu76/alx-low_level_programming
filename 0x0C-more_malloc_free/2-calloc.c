#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - allocates mem. using with malloc
 *@nmemb: elements
 *@size: the number of bytes of each element
 *Return: returns conditionally
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)

		return (NULL);

	memset(ptr, 0, (nmemb * size));

	return (ptr);
}
