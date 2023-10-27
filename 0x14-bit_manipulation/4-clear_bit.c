#include "main.h"

/**
 * clear_bit - sets the value of a bit to a 0 at an index
 *@n: A pointer that points to memory address
 *@index: index starting from zero
 *Return: returns 1 of -1 when error occurs
 */
int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int clear;

	if (index < (sizeof(unsigned long int) * 8))
	{
		clear = 1UL << index;
		*n &= ~clear;
		return (1);
	}
	return (-1);



}
