#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 *_islower - checks for lowercase.
 *@c: character to check
 *Return: This returns 1 if lower, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);
	else
		return (0);
}
