#include "main.h"

/**
 *print_alphabet_x10 - This prints alphabet ten times
 *Return: Nothing
 */
void print_alphabet_x10(void)
{
	char letters;
	int digits;

	digits = 0;
	while (digits < 10)
	{
	for (letters = 'a'; letters <= 'z'; letters++)
		{
		_putchar(letters);

		}

		_putchar('\n');
		digits++;
	}
}
