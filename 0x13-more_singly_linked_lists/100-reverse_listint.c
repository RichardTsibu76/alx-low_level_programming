#include "lists.h"
/**
 *reverse_listint - This is function is to reverse a listint_t list
 *@head: This' the pointer to the first node of the list
 *Return: This returns a pointer to the first node of
 *		of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old, *reverse;
	listint_t *next;

	old = NULL;
	reverse = *head;

	while (reverse != NULL)
	{
		next = reverse->next;
		reverse->next = old;
		old = reverse;
		reverse = next;
	}
	*head = old;
	return (old);



}
