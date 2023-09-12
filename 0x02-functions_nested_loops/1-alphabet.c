#include "main.h"
/**
 *print_alphabet - This prints alphabet
 *main - This is the main entry.
 *Return: Has return
*
*/
void print_alphabet(void)
{

	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);

	}
	_putchar('\n');
	return;
}
