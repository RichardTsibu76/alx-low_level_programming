#include <stdio.h>
#include <stdlib.h>

/**
 *main - This is main point of entry
 *Description: This prints the minimum number of coins
 *@argc: counter of arg
 *@argv: array of strings
 *Return: return 0
 */
int main(int argc, char *argv[])
{
	int x_money = 0;
	int currency = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi convert string to integer */
	currency = atoi(argv[1]);
	while (currency > 0)
	{

		if (currency - 25 >= 0)
		{
			currency = currency - 25;
		}
		else if (currency - 10 >= 0)
		{
			currency = currency - 10;
		}
		else if (currency - 5 >= 0)
		{
			currency = currency - 5;
		}
		else if (currency - 2 >= 0)
		{
			currency = currency - 2;
		}
		else if (currency - 1 == 0)
		{
			currency = currency - 1;
		}
		x_money++;
	}
	printf("%d\n", x_money);
	return (0);
}
