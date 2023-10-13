#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_strings - prints strings followed by new line
 * @separator: this is more like delimeter
 * @n: stirng number
 * Return: nothng
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_args;
	/* this is the va_list type for declaring variable */
	unsigned int idx = 0;
	char *str;

	va_start(str_args, n);
	while (idx < n)
	{
		str = va_arg(str_args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (idx < (n - 1) && separator != NULL)
			printf("%s", separator);
		idx++;
	}
	/* end of it to free the space */
	va_end(str_args);
	printf("\n");
}
