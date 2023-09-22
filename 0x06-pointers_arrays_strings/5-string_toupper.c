#include "main.h"

/**
 *string_toupper - This function changes string to uppercase
 *@str: parameter which is a placeholder
 *Return: This returns a str.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}

	return (str);
}
