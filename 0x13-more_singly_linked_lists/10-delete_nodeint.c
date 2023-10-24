#include "lists.h"
/**
 *delete_nodeint_at_index - This specifically deletes at particular index
 *@head: is a pointer
 *@index: index of the node
 *Return: it 1 on success else -1 of failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nnode, *ndel;
	unsigned int i = 0;

	nnode = *head;
	if (!nnode)
		return (-1);
	if (index == 0)
	{
		*head = nnode->next;
		free(nnode);
		return (1);
	}
	while (i < index - 1)
	{
		if (!nnode)
			return (-1);
		nnode = nnode->next;
		i++;
	}
	if (!nnode->next)
		return (-1);
	ndel = nnode->next;
	nnode->next = ndel;
	free(ndel);
	return (1);
}
