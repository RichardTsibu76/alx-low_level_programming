#include "main.h"
/**
 *print_most_numbers - prints numbers 0 to 9
 *Rrturn: Does not return anything, is void
 */
void print_most_numbers(void)
{
	char num = '0';

	for (; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
		continue;

		_putchar(num);

	}
	_putchar('\n');
	num++;
}
