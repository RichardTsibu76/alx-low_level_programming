#include "lists.h"

/**
 *free_listint - This function frees a listint_t list
 *@head: A pointer to the first node
 *@listint_t: defined type
 *Return: This returns nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp_ptr;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp_ptr = head;
		head = head->next;
		free(temp_ptr);
	}
}
