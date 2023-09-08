#include <stdio.h>

/**
 *main - this is the main entry
 * Description: Calculating for the size of datatype
 *Return: Always return 0
 */
int main(void)
{
	printf("Size of a char: %dbyte(s)\n", sizeof(char));

	printf("Size of an int: %dbyte(s)\n", sizeof(int));

	printf("Size of a long int: %ldbyte(s)\n", sizeof(int));

	printf("Size of a long long int: %ldbyte(s)\n", sizeof(long long int));

	printf("Size of a float: %fbyte(s)\n", sizeof(float));

	return (0);
}
