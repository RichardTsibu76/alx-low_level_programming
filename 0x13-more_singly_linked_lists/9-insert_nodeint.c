#include "lists.h"
/**
 *insert_nodeint_at_index - Node insertion at a given position
 *		 is what the function does
 *@idx: index of the list where node is to be added
 *@head: A pointer to the initial node
 *@n: the given node
 *Return: Address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *t_ptr, *tmp_ptr;
	listint_t *n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);
	n_node->n = n;
	n_node->next = NULL;
	if (*head == NULL && idx != 0)
	{
		free(n_node);
		return (NULL);
	}
	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	t_ptr = *head;
	while (t_ptr != NULL && counter < idx)
	{
		tmp_ptr = t_ptr;
		counter++;
		t_ptr = t_ptr->next;
	}
	if (counter == idx)
	{
		n_node->next = t_ptr;
		tmp_ptr->next = n_node;
		return (n_node);
	}
	free(n_node);
	return (NULL);
}
