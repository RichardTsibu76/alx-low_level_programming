#include "main.h"

#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head:points to head
 * Return:does not return 
 */

void free_list(list_t *head)
{
	list_t *tmp_ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp_ptr = head;
		head = head->next;
		free(tmp_ptr->str);
		free(tmp_ptr);
	}
}
