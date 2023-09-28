#include <stdio.h>
#include "main.h"

/**
 *factoral - This function returns a factorial of a given num.
 *@n: The constant number of the factorial
 *Return: 0.
 */
int factorial(int n)
{	/*this is my base case */
	if (n < 0)

	return (-1);

	if (n == 0)

	return (1);

	return (n * factorial(n - 1));
	return (0);
}
