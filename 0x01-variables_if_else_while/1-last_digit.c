#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - This is the main entry
*Return: The return value is 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("%d and is greater than 5\n");
	}
	if (n == 0)
	{
		printf("%d and is 0\n");
	}
	else
	{
		printf("%d and is less than 6 and not 0");
	}

	return (0);
}
