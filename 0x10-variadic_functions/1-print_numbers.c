#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: delimeter
 * @n: arguments to print
 * Return: returns
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print_args;
	unsigned int idx = 0;

	va_start(print_args, n);
	while (idx < n)
	{
		printf("%d", va_arg(print_args, int));
		if (idx < (n - 1) && separator != NULL)
			printf("%s", separator);
		idx++;
	}
	printf("\n");
	va_end(print_args);
}
