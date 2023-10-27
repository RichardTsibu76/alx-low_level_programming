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
	{
		unsigned int feed = 0;
		int j = 0;

		if (b == NULL)
		{
			return (0);
		}

		while (b[j] != '\0')
		{
			if (b[j] == '1')
			{
				feed = (feed << 1) | 1;
			}
			else if (b[j] == '0')
			{
				feed = feed << 1;
			}

			else
			{
				return (0);
			}
			j++;
		}
		return (feed);




	}
}
