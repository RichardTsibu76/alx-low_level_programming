#include "function_pointers.h"

/**
 * print_name - Prints name
 * @name: a pointer
 * @f: function pointer
 * Return: It void keyword and returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	/* f is the function pointer that point to a function as argum */
	f(name);
}
