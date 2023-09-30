#include <stdlib.h>
#include <stdio.h>

/**
 *main - This is the entry point of the program
 *Description: This program prints all the arg it receives
 *@argc: argument count
 *@argv: array of strings
 *Return: return 0.
 */
int main(int argc, char *argv[])
{
	int idx;

	for (idx = 0; idx < argc; idx++)
		printf("%s\n", argv[idx]);
	return (0);
}
