#include "lists.h"

/**
 *free_listint2 - Frees a listint_t list
 *@head: A pointer to head
 *Return: Nothing it's void
 */
void free_listint2(listint_t **head)
{
	listint_t *anotherptr = *head;

	if (head == NULL || *head == NULL)

	return;

	while (*head != NULL)
	{
		anotherptr = (*head)->next;
		free(*head);
		(*head) = anotherptr;
		head = NULL;
	}
	*head = NULL;
}
