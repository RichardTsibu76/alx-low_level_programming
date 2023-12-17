#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - This is the main entry
*Return: The return value is 0.
*/
int main(void)
{
	int n, l_d;/*l_d means the last digit*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	l_d = n % 10;
	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l_d);
	}
	if (n == 0)
	{
		printf("Last digit of %d is %d and is  0\n", n, l_d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l_d);
	}

	return (0);
}
