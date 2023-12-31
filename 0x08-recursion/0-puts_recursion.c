#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - This function prints a string followed by (\n).
 *@s: string pointer
 *Return: nothing in returns its void
 */
void _puts_recursion(char *s)
{

	/* This is my base case */
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
		_putchar(*s);
		s++;

	_puts_recursion(++s);

}
