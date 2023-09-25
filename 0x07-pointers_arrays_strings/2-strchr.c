#include <stdio.h>

/**
 * _strchr - a function that locates a character in a string
 *@s: a pointer
 *@c: a character
 *Return: returns a pointer to charracter c or null if char is not found
 */
char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c )

		return (s);

		if (*s == '\0')
			return (NULL);
		s++;

	}



}
