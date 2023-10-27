#include "main.h"


/**
 *print_binary - Prints the binary represnetation
 *@n: The number to represent
 *Return: This returns nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int cover, idx;
	int check_long = 1;

	cover = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		putchar('0');
		return;
	}
	for (idx = 0; idx < (sizeof(unsigned long int) * 8); idx++)
	{
		if (n & cover)
		{
			check_long = 0;
			putchar('1');
		}
		else if (!check_long)
			putchar('0');
		n <<= 1;
	}
}
