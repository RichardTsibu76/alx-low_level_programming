#include "main.h"
/**
 *reverse_array - this function reverses int array
 *@n: number of element
 *@a: pointer to int
 *Return: nothing
 */
void reverse_array(int *a, int n)
{
	int eval, store, measure;

	measure = n / 2;
	for (eval = 0; eval < measure; eval++)
	{
		store = a[n - 1 - eval];
		a[n - 1 - eval] = a[eval];
		a[eval] = store;
	}
}

