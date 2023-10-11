#include "function_pointers.h"

/**
 *array_iterator - executes a given function
 *@size: array size
 *@action: a pointer to function needed
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t array_index;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (array_index = 0; array_index < size; array_index++)
		action(array[array_index]);
}
