#include "main.h"

/**
 *__strncpy - Copies a string
 *@dest:Destination
 *@scr:String part to be manipualated
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
