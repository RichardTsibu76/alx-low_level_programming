#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - main entry
 *Description: This adds positive numbers
 *@argc: counter
 *@argv: argument vector
 *Return: always 0.
 */
int main(int argc, char *argv[])
{
	int x = 0;
	int b, c;

	for (b = 1; b < argc; b++)
	{
		for (c = 0; argv[b][c]; c++)
		{
			if (isdigit(argv[b][c]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (b = 1; b < argc; b++)
	{
		x += atoi(argv[b]);
	}
	printf("%d\n", x);
	return (0);
}
