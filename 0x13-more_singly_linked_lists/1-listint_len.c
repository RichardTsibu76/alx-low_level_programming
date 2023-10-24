#include "lists.h"

/**
 *listint_len - returns number of elements
 *@h: points to the first node
 *Return: elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *ptr;

	if (h == NULL)
		return (0);

	ptr = h;
	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
