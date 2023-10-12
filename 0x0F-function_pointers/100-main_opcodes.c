#include <stdio.h>
#include <stdlib.h>

/**
 * main - The program entry point
 * @argc: counter of argument
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int k, l;
	int (*ptr)(int, char **);

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
/* The atoi function convert the string to integer */
	k = atoi(argv[1]);
	if (k < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = &main;
	for (l = 0; l < k; l++)
		printf("%.2x ", *((unsigned char *)(ptr + l)));
	printf("\n");
	return (0);
}
