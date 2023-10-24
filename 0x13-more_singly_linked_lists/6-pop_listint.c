#include "lists.h"
/**
 *pop_listint - Deletes a node of a listint_t
 *@head: A pointer
 *Return: 0 if lists is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *d_ptr;
	int data;

	if (*head == NULL)
		return (0);
	d_ptr = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(d_ptr);
	return (data);


}
