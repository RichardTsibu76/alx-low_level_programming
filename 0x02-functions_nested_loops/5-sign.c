#include "main.h"
#include <stdio.h>

/**
 *print_sign - This prints the sign of a number
 *@n: Denote the number of evaluation
 *Return: returns 0 and prints 0 if n is 0, and ret -1 if -1 when n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (1 == 0)
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
