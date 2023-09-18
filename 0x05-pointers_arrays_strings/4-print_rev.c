#include "main.h"
#include <stdio.h>
/**
 *print_rev - This prints a string in reverse
 *@s: the string
 *Return: does return nothing
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len]; len++)
		;
	len--;
	for (; len >= 0; len--)
		putchar(s[len]);
	putchar('\n');
}
