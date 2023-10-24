#include "lists.h"
/**
 *print_listint_safe - This prints the listint_t linked list
 *@head: points to the first element of the list
 *Return: return the number of the node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp, *num;

	size_t counter;

	temp = head;

	num = NULL;
	counter = 0;

	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		num = temp;
		temp = temp->next;
		counter++;

		if (num <= temp)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
	}
	return (counter);

}
