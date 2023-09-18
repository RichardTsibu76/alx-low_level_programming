#include "main.h"
#include <stdio.h>
/**
 *_puts - prints a strin to the standard output
 *@str: the string to prints
 *Return: void returns nothing
 */
void _puts(char *str)
{

	int idx, len;

	for (len = 0; str[len]; len++)
		;
	for (idx = 0; idx < len; idx++)
		putchar(str[idx]);
	putchar('\n');
}

