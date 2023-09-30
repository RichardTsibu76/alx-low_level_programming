#include <stdlib.h>
#include <stdio.h>

/**
 *main - The main entry
 *Description: This progrma prints the argc
 *@argc: counts argument.
 *@argv: array of strings stored in here
 *Return: This returns 0.
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int v = argc - 1;

	printf("%d\n" , v);

	return(EXIT_SUCCESS);
}
