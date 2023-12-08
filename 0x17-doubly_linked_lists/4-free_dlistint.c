#include "lists.h"

/**
 * free_dlistint - Frees the dlistint_t list.
 * @head: The pointer to the head
 * Return: Nothing its void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}
