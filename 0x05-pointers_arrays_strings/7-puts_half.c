#include "main.h"
#include <stdio.h>
/**
 *puts_half - This function prints half string with putchar(10)
 *@str: string const
 *Return: void does not return anythng
 */
void puts_half(char *str)
{
	int i;
	int lenght, half;

	for (lenght = 0; str[lenght]; lenght++)
		;

	half = lenght / 2;

	if (lenght / 2 != 0)

		half++;
	for (i = half; i < lenght; i++)

		putchar(str[i]);
	putchar('\n');
}
