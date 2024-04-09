#include "search_algos.h"

/**
 *linear_search - searches for a value in an array of
 *integers using the Linear search algorithm
 *
 *@array: input array
 *@size: size of the array of the algorithm
 *@value: The value to search
 *Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t v;

	if (array == NULL)
	{
		return (-1);
	}

	for (v = 0; v < size; v++)
	{
		printf("Value checked array[%li] = [%i]\n", v, array[v]);
		if (array[v] == value)
		{
			return (v);
		}
	}
	return (-1);
}
