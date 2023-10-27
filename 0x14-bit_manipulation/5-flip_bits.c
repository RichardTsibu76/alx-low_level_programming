#include "main.h"
/**
 *flip_bits - The fuction returns number of bits you would flip
 *@n: The input value to flip
 *@m: the input value
 *Return: returns the number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t setting_count = 0;
	unsigned long int index, k, exclusive = n ^ m;

	for ((index = (sizeof(unsigned long int) * 8)); index > 0; index--)
	{
		k = exclusive >> index;
		if (k & 1)
			setting_count++;
	}
	return (setting_count);


}
