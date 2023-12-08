#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node
 * @head: The pointer to the head
 * @index: the node at which its should ret
 * Return: returns
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (index == i)
		return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
