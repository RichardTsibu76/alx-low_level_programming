#include <stdio.h>
#include <stdlib.h>

/**
 *main - The main program starts from here also called entry point
 *Description: a program that prints its name , followed by new line.
 *@argc: argument count
 *@argv: argument vector.
 *Return: Integer type returns 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	/* this should really prints first index */

	printf("%s\n", argv[0]);
		return (0);
}
