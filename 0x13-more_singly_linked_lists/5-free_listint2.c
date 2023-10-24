#include "lists.h"

/**
 *free_listint2 - Frees a listint_t list
 *@head: A pointer to head
 *Return: Nothing it's void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head != NULL)
	{
		while ((*head)->next != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
		free(*head);
		*head = NULL;
	}

}
