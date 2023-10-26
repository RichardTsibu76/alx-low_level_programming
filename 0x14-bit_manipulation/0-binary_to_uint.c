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
	if (b == NULL)
	{
		return (0);
	}
	unsigned int i = 0;
	while (b[i] != '\0')
		char c = b[i];
	if (c == '0')
		result << = 1;
	else if (c == '1')
		result = (result << 1) | 1;
	else
		return 0;

}
