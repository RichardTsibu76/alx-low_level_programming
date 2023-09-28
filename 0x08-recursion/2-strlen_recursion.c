#include <stdio.h>

/**
 *_strlen_recursion - this function returns the len of a string
 *@s: pointer to string
 *Return: returns the len
 */
int _strlen_recursion(char *s)
{
	/* This is my base case to check for null charracter */
	if (*s == '\0')
	/* if the string is a null character */
		return (0);
	/* if not return one plus the string length and also the next of byte */
	return (1 + _strlen_recursion(s + 1));
}
