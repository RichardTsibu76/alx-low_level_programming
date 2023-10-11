#include "function_pointers.h"

/**
 *array_iterator - executes a given function
 *@size: array size
 *@array: a pointer to array
 *@action: a pointer to function needed
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || size <= 0 || action == NULL)
		return;
	for (index = 0; index < size; index++)
		action(array[index]);
}
