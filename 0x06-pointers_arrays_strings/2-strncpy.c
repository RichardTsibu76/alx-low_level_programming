#include "main.h"
#include <string.h>

/**
 *_strncpy - Copies a string
 *@dest:temporal storage.
 *@src: This is source string
 *@n:the charater
 *Returns: this returns string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int s;

	for (s = 0; s < n && src[s] != '\0'; s++)
		dest[s] = src[s];

	for (; s < n; s++)
		dest[s] = '\0';

	return (dest);
}
