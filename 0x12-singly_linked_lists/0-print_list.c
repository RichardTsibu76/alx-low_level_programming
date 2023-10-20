#include "lists.h"

/**
 *print_list - This function prints all of a list_h
 *@h: a pointer to list
 *Return: if str NULL , print [0]
 */

size_t print_list(const list_t *h)
{
	/* the size_t datatye set a counter*/
	/* to count the list */
	size_t counter = 0;
	const list_t *ptr;
 /* if this condition is true it means no list */
	if (h == NULL)
		return (0);
	ptr = h;

	while (ptr != NULL)
	{
/* while traversing the increment the count */
		counter++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
/* Using assignment operator to acess the elemrnt*/
			printf("[%d] %s\n", ptr->len, ptr->str);
	       ptr = ptr->next;
	}
	return (counter);
}
