#include <stdio.h>
#include "main.h"
/**
 *_strspn - This function gets the length of a prefix substring
 *@s: a pointer
 *@accept: a pointer
 *Return: returns
 */
unsigned int _strspn(char *s, char *accept)
{
	int den = 0;
	char *ptr = s;

	while (*accept)
	{
		while (*s)
		{
			if (*accept == *s)
			{
				den++;
				break;

			}
			s++;

		}
		s = ptr;
		accept++;

	}
	return (len);
}
