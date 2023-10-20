#include "lists.h"
#include <string.h>

/**
 * _strlen - calculates the length of a string
 * @s: a pointer to strn const
 * Return: length
 */

int _strlen(const char *s)
{
	int len = 0;

	for (; s[len]; len++)
		;
	return (len);
}


/**
 * add_node_end - adds node at the end of the list
 * @head: A pointer to first node
 * @str: string constant
 * Return: returns new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *ptr_end;

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = _strlen(str);
	ptr->next = NULL;
	if ((*head) == NULL)
	{
		(*head) = ptr;
		return (ptr);
	}
	ptr_end = (*head);
	while (ptr_end->next != NULL)
		ptr_end = ptr_end->next;
	ptr_end->next = ptr;
	return (ptr);
}
