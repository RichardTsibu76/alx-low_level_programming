#include <stdio.h>
/**
 *_pow_recursion -This function returns the value of x^y.
 *@x: the base value.
 *@y: index
 *Return: this returns -1 if a condition of y < 0,
 *		returns -1.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)

	return (-1);

	/* this returns 1 because any number raised to index 0 is 1*/
	if (y == 0)

	return (1);

	return (x * (_pow_recursion(x, y - 1)));
}
