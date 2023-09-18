#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - main entry
 *Return:  passwd
 */
int main(void)
{
	int r;
	char q;

	srand(time(0));
	while (r <= 2645)
	{
		q = rand() % 128;
		r += q;
		putchar(q);
	}
		putchar(2772 - r);
		return (0);
}
