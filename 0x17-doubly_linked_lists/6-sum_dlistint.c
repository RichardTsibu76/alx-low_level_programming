#include "lists.h"
/**
 * sum_dlistint - Sums all the data and returns in dlist
 * @head: The pointer to the head
 * Return: Sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
