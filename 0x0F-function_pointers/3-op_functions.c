#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - adds two int val
 * @a: first int val
 * @b: second
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first
 * @b: second
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two int val
 * @a: f1 int
 * @b: second integer value
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: 1st integer
 * @b: 2ndinteger
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the module
 * @a: first int val
 * @b: The second int value
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
