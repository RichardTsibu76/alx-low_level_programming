#include <stdio.h>
#include "main.h"
/**
 *_print_rev_recursion - Prints a string a reverse
 *@s: points to address
 *Return: This returns nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	return;

	_print_rev_recursion(++s);
	_putchar(*s);
}
