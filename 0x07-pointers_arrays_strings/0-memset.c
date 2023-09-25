#include "main.h"
#include <string.h>

/**
 *_memset - This fucntion in c fills memory with a constant byte
 *@s: A pointer variable to return
 *@n: constant
 *@b: constant byte 
 *Return: returns a pointer (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
		/* Just changing the value stored in the first n memory */

	}
	return (s);
}
