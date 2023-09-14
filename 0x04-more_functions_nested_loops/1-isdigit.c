#include "main.h"
/**
 *_isdigit - This checks for digits
 *@c: the digits charaacter to check
 *Return: This return 1 if c is a digit or otherwise
 */
int _isdigit(int c)
{
	int num = '0';

	while (num <= '9')
	{
		if (c == num)
		return (1);
		num++;
	}
	return (0);
}
