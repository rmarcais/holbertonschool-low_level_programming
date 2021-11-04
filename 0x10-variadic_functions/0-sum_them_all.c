#include "variadic_functions.h"
/**
 * sum_them_all - returns the sums of all its parameters
 * @n: takes an const unsigned int value
 *
 * Return: 0 or sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, const unsigned int);
	va_end(ap);
	return (sum);
}
