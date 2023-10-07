#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *_strdup - this function returns a pointer
 *@str: the pointer
 *Return: returns pointer
 */
char *_strdup(char *str)
{

int idx = 0;
	char *dup;

	if (str == NULL)
	{
		dup = NULL;
		return (dup);
	}
	dup = (char *) malloc((strlen(str) + 1) * sizeof(char));
	if (dup != NULL)
	{
		while (*str)
		{
			*(dup + idx) = *(str);
			idx++;
			str++;
		}
	}
	return (dup);

}
