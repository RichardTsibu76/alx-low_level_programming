#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a strn
 * @s: pointer
 * Return: string (len)
 */

int _strlen(const char *s)
{
	int len = 0;

	for (; s[len]; len++)
		;
	return (len);
}

/**
 * add_node - The function adds a new node
 * @head: points to a pointer
 * @str: constantly pointing to the string
 * Return: The new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (ptr);
	}
	ptr->len = _strlen(str);
	ptr->next = (*head);
	(*head) = ptr;
	return (ptr);
}
