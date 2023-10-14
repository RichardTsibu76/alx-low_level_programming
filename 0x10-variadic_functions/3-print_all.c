#include "variadic_functions.h"
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: list of types
 * Return: Nothing it's void, but prints
 */

void print_all(const char * const format, ...)
{
	va_list all_args;
	int idx = 0;
	char *str, *delimiter = "";

	va_start(all_args, format);
	if (format)
	{
		while (format[idx])
		{
		/* the very switch statment works on each of the labels */
		/* break is used to jump manually to the next label */
			switch (format[idx])
			{
				case 'c':
					printf("%s%c", delimiter, va_arg(all_args, int));
							break;
				case 'i':
					printf("%s%i", delimiter, va_arg(all_args, int));
							break;
				case 'f':
					printf("%s%f", delimiter, va_arg(all_args, double));
							break;
				case 's':
					str = va_arg(all_args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", delimiter, str);
					break;
				/* if none of none of the labels does not satisfiably */
				/* the default is executed which is idx increament */
				default:
				idx++;
				continue;
			}
			delimiter = ", ";
			idx++;
		}
	}
	printf("\n");
	va_end(all_args);
}
