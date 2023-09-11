#include <stdio.h>
/**
 *main - This is the main entry.
 *Return: This returns 0.
 */
int main(void)
{
	int digits;

	for (digits = 0; digits <= 9; digits++)
	{
		putchar(digits + '0');
	}
	putchar(10);
	return (0);
}
