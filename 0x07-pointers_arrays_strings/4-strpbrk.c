#include "main.h"
#include <string.h>

/**
 *_strpbrk - searches for string
 *@s: a pointer
 *@accept: a pointer
 *Return: returns
 */
char *_strpbrk(char *s, char *accept)
{

	char *ptr = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			return (s);
			accept++;
		}
		accept = ptr;
		s++;
	}	return (NULL);
}
