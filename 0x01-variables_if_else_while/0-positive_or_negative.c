#include <stdlib.h>
#include <time.h>
/**
*main - This is the main entry
*Return: Always 0.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n");
	}
	else if (n == 0)
	{
		printf("%d is zero"\n);
	}
	else
	{
		printf("%d is negative");
	}
	return (0);
}
