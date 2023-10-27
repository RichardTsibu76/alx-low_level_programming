#include "main.h"
/**
 *get_bit - A funtion that returns bits value at given index
 *@n: the bit value
 *@index: The index of the bit
 *Return: The value of bit at index of -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{

		unsigned long int detect;

		if (index < (sizeof(unsigned long int) * 8))
		{
			detect = 1UL << index;
			if (n & detect)
				return (1);
			else
				return (0);
		}
		else
			return (-1);
}
