#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: Points to node
 * Return: elements
 */

size_t list_len(const list_t *h)
{
	size_t counter = 0;
	const list_t *ptr;
/* allocating memory dynamically */
/* using the malloc function */
	ptr = malloc(sizeof(list_t));
/* ret -1 if pointer does not points no node*/
	if (ptr == NULL)
		return (-1);
	ptr = h;

	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
