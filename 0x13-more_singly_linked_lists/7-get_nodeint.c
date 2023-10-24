#include "lists.h"
/**
 *get_nodeint_at_index - A function that returns the nth node
 *@index: the node index starting from 0
 *@head: A pointer to the first node
 *Return: returns NULL on none exiting node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *get_ptr = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (get_ptr != NULL)
	{
		if (counter == index)
			return (get_ptr);
		counter++;
		get_ptr = get_ptr->next;
	}
	return (NULL);




}
