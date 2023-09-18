#include "main.h"
#include <stdio.h>

/**
 *rev_string - This function reverses a string
 *@s: The string be reversed
 *Return: Does return nothing
 */
void rev_string(char *s)
{
	int eval, len, index, half;

	for (len = 0; s[len]; len++)
		;
	half = len / 2;
	len--;
	for (index = 0; index < half; index++, len--)
	{
		eval = s[len];
		s[len] = s[index];
		s[index] = eval;
	}


}
