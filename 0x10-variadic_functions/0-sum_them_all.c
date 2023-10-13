#include "variadic_functions.h"

/**
 * sum_them_all - This returns sum it parameters
 * @n: formal parameter
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list sum_arg;
	unsigned int sum = 0, idx = 0;

	if (n == 0)
		return (0);

	va_start(sum_arg, n);
	while (idx < n)
	{
		sum += va_arg(sum_arg, unsigned int);
		idx++;
	}
	va_end(sum_arg);
	return (sum);
}
