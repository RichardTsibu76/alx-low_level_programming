#include <stdio.h>

/**
 *main - This is the main entry.
 *Return: Always returun 0
 */
int main(void)
{
	char low;
	char UP;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (UP = 'A'; UP <= 'Z'; UP++)
	{
		putchar(UP);
	}
	putchar('\n');
	return (0);

}

