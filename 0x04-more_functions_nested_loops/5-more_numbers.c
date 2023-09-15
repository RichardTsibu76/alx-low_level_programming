#include "main.h"
/**
 *more_numbers - Displaying the figures 10 times
 *Return: Nothing
 */
void more_numbers(void)
{
	int num, digit;

	for (num = 0; num <= 9; num++)
	{

		for (digit = 0;  digit <= 14; digit++)
			{
				if (digit > 9)
				_putchar((digit / 10) + '0');
				_putchar((digit % 10) + '0');

			}
	_putchar(10);
	}

}
