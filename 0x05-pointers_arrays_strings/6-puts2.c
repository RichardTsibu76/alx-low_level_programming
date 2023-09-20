#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str:  the string to print
 * Return: This actually returns nothing
 */
void puts2(char *str)
{
	int str_to_print;

	while (*str)
	{
		if (str_to_print % 2 == 0)
			putchar(*str);

		str_to_print++;
		str++;
	}
	putchar('\n');
}
