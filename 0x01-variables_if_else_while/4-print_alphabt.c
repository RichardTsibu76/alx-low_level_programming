#include <stdio.h>
/**
 *main - This is the main entry
 *Return: return 0
 */
int main(void)
{
	char let;

	for (let = 'a'; let <= 'z'; let++)
	{
		if (let != 'q' && let != 'e')
			putchar(let);
	}
	putchar(10);
	return (0);
}

