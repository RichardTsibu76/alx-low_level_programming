#include "lists.h"
/**
 *delete_nodeint_at_index - This specifically deletes at particular index
 *@head: is a pointer
 *@index: index of the node
 *Return: it 1 on success else -1 of failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int ND;
	listint_t *deleted_node, *temp;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	deleted_node = NULL;
	temp = *head;
	for (ND = 0; temp != NULL && ND < index; ND++)
	{
		deleted_node = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	if (deleted_node != NULL)
		deleted_node->next = temp->next;
	else
		*head = temp->next;

	free(temp);
	return (1);
}
