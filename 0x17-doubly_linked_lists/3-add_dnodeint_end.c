#include "lists.h"
/**
 * add_dnodeint_end - Adds a node at the end.
 * @head: The pointer
 * @n: The integer
 * Return: returns a node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (current->next != NULL)
		current = current->next;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
