#include "lists.h"

/**
 * dlistint_len - In this returns the elements in dlist
 * @h: The pointer to the head of the doubly linked list
 * Return: Elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num = 0;

	while (current != NULL)
	{
		num++;
		current = current->next;
	}
	return (num);
}
