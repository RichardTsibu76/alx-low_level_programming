#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - This function prints the sum of two diagonals of sqr matrix
 *@a: a pointer
 *@size: size prior to array
 *Return: returns nothing
 */
void print_diagsums(int *a, int size)
{
	int row, column, sum1 = 0, sum2 = 0;

	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			if (column == row)

		sum1 += *(a + (row * size) + column);

		   if ((row + column) == (size - 1))
		 sum2 += *(a + (row * size) + column);

		}
	}

	printf("%d, %d \n", sum1, sum2);
}
