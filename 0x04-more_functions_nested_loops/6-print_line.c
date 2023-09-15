#include "main.h"
/**
 *print_line - draws a straight line
 *@n: the number of times the character should prints
 *Return: return nothing
 */
void print_line(int n)
{
	int line = 0;

	for (; (line  < n) && (n > 0); line++)
		_putchar('_');
	_putchar('\n');


}
