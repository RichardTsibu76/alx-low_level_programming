#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 *str_concat - joins two strings
 * @s1: first string
 * @s2: second string
 *Return: a pointer
 */

char *str_concat(char *s1, char *s2)
{

	int idx = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (str != NULL)
	{
		while (*s1)
		{
			*(str + idx) = *(s1);
			s1++;
			idx++;
		}
		while (*s2)
		{
			*(str + idx) = *(s2);
			s2++;
			idx++;
		}
		*(str + idx) = '\0';
	}
	return (str);


}
