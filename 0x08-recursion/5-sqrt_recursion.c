#include "main.h"
#include <stdio.h>
int _helper_function(int n, int root);
/**
 * _sqrt_recursion - This funtion returns natural sqr root
 *@n: intput
 *Return: base on condition
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

	return (_helper_function(n, root));
}
/**
 * _helper_function - This funct finds sq root
 * @root: square root as parameter
 * @n: number of emphasis
 * Return: root
 */
int _helper_function(int n, int root)
{
	if (n == root * root)
		return (root);
	if (root == (n / 2))
		return (-1);

	return (_helper_function(n, root + 1));
}
