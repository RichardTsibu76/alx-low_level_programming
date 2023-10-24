#include "lists.h"

/**
 *add_nodeint - Adds node at the beginning
 *@head: A pointer to the first node
 *@n: The elements
 *@listint_t - the list
 *Return: Address of new elment
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_newnode = malloc(sizeof(listint_t));

	if (n_newnode == NULL)
	return (NULL);

	n_newnode->n = n;
	n_newnode->next = *head;
	if (*head == NULL)
		n_newnode->next = NULL;
	*head = n_newnode;
	return (n_newnode);
}
