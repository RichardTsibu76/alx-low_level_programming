#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int c,	mul = 1;

	if (argc == 3)
	{
		for (c = 1; c < argc; c++)
		/* atoi function converts strings to integer */

			mul *= atoi(argv[c]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
