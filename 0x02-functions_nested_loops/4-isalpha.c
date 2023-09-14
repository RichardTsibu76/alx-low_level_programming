#include <stdio.h>

/**
 *_isalpha - This checks for alphabetic character
 *@c: the character to check.
 *Return: This returns 1 if lowercase or uppercase or otherwie
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
