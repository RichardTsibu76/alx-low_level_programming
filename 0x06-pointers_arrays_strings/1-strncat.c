#include "main.h"

/**
 *_strncat - This concatenates two strings
 *@dest: destination of source string
 *@src: The source string
 *@n: the number of chararater
 *Return: This returns dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int len = 0;

	while (dest[index++])
		len++;
	for (index = 0; src[index] && index < n; index++)

	dest[len++] = src[index];

	return (dest);
}
