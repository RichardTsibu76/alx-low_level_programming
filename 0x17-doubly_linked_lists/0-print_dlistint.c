#include "lists.h"
#include <stddef.h>
/**
 * print_dlistint - Prints out all the element
 * @h: The head pointer to first node
 * Return: Returns the number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t num = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		num++;
		current = current->next;
	}
	return (num);
}
