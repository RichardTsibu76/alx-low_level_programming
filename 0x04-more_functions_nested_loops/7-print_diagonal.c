#include "main.h"
/**
 *print_diagonal - prints diagonal
 *@n: the line to print
 *Return: Nothing
 */
void print_diagonal(int n)
{

	int diag = 0;
	int empty;

	if (n <= 0)
		_putchar('\n');
	else
	{
		while (diag < n)
		{
			_putchar('\\');
			_putchar('\n');
			diag++;
			if (diag == n)
				break;

			for (empty = 0; empty < diag; empty++)
				_putchar(' ');
		}
	}




}
