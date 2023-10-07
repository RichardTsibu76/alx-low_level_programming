#include "main.h"
#include <stdlib.h>

/**
 *create_array - A function that creates array of characters
 *@c: the character
 *@size: the size in bytes
 *Return: returns a pointer or null if failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int idx;
	char *array;

	if (size == 0)
	return (NULL);
	array = (char *) malloc(sizeof(char) * size);
	if (array != NULL)
	{
		for (idx = 0; idx < size; idx++)
			*(array + idx) = c;
	}
	return (array);

}
