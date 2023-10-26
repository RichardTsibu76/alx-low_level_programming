#include "main.h"

/**
 *binary_to_uint - This function converts a binary
 *	 number to an unsigned int
 *
 *@b: This is pointer
 *Return: Converted number, or 0
 *		if no char in string b
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int idx = 0, base10 = 0;

	if (!b)
		return (0);
	while (b[idx])
	{
		if (b[idx] == '1' || b[idx] == '0')
			base10 = (base10 << 1) + (b[idx] - '0');
		else
			return (0);
		idx++;
	}
	return (base10);

}
