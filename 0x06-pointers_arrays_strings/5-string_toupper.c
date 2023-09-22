#include "main.h"

/**
 *string_toupper - This function changes string to uppercase
 *@strin: string as param
 *Return: This returns a strin.
 */
char *string_toupper(char *strin)
{

	int i = 0, verify = 'a' - 'A';

	while (strin[i] >= 'a' && strin[i] <= 'z')
	{	strin[i] -= verify;
		i++;
	}
	return (strin);
}
