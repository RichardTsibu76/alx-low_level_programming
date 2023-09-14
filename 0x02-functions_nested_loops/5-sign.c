#include "main.h"
#include <stdio.h>

/**
 *print_sign - This prints the sign of a number
 *@n: Denote the number of evaluation
 *Return: returns 1, 0, and -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
