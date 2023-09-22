#include "main.h"
#include <string.h>

/**
 *_strcat - This fuction concatenates two strings
 *@dest: one of two sessions for concatenation
 *@src: constant for appending
 *Return: return pointer to the resulting dest
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int idx;

	for (len = 0; dest[len]; len++)
		;
	idx = 0;
	while (src[idx])
	{
		dest[len] = src[idx];
		len++;
		idx++;
	}
	dest[len] = '\0';

	return (dest);
}
