#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 *_print_cheesboard - prints cheeseboard
 *@a: A ponter variable
 *Return: returns nothing its void
 */
void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	for (r = 0; r <= 7; r++)
	{
		for (c = 0; c <= 7; c++)
		{
			putchar(a[r][c]);
		
		}
		putchar(10);
	}
}
