#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - Prints name
 * @name: a pointer
 * @f: function pointer
 * Return: It void keyword and returns nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	f(name);
}
