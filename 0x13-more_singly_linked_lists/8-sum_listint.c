#include "lists.h"
/**
 *sum_listint - The function returns the sum of all the data(n)
 *@head: The pointer to the first node
 *Return: If is an empty list, it returns 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (head == NULL)
		return (sum);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);




}
