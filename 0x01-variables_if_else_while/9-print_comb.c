#include <stdio.h>
/**
 *main - This is the main entry
 *Return: This retuurns 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar (num + '0');

	if (num <= 9)
	{

		putchar (',');
		putchar (' ');
	}
	}
	putchar (10);
	return (0);
}
