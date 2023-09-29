#include "main.h"

/**
 * check_prime - This checks for prime or not
 * @p: input
 * @c: input
 * Return: 0 or 1
 */
int check_prime(int c, int p)
{
	/* base case */
	if (p == c)
		return (1);
	else if (p % c == 0)
		return (0);
	/* this means return to the condtion */
	else
		return (check_prime(c + 1, p));
}

/**
 * is_prime_number - checks for prime
 * @n: input
 * Return: returns 1 or 0 true or vice -versa
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (check_prime(2, n));
}
