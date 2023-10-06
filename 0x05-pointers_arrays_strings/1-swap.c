#include "main.h"
/**
 *swap_int - This fucntion swaps two integer values.
 *@a: first value
 *@b: second value
 *Return: This void does not return anything
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	 *b = swp;
}
