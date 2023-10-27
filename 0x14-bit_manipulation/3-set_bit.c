#include "main.h"

/**
 *set_bit - This fuction set bit value to 1 at a given index
 *@n: bit at target
 *@index: index starting from 0
 *Return: 1 on success or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int shield_off;

	if (index < (sizeof(unsigned long int) * 8))
	{
		shield_off = 1UL << index;
		if ((*n & shield_off) == 0)
		{
			*n |= shield_off;
			return (1);
		}
	}
/* on failure return negative -1 */
	return (-1);
}
