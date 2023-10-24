#include "lists.h"

/**
 *add_nodeint_end - Adds a new node at the end of the list
 *@head: the pointer to the first node
 *@listint_t: the list of the node
 *@n: value of be inserted at the end
 *Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmpnode, *n_node = malloc(sizeof(listint_t));
	
	if (n_node == NULL)
		return (NULL);
	tmpnode = *head;
	n_node->n = n;
	n_node->next = NULL;

	if ((*head) == NULL)
	{

		*head = n_node;
		return (n_node);
	}
	while (tmpnode->next != NULL)
		tmpnode = tmpnode->next;
	tmpnode->next = n_node;
	return (n_node);
}
