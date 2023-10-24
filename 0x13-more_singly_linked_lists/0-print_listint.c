#include "lists.h"

/**
 *print_listint - prints all elements of a listint_t
 *@h: The pointer to the first node
 *Return: This returns the count
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = h;

	if (h == NULL)
		return (0);

	while (ptr != NULL)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
