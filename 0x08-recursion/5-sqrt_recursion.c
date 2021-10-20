#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 *_getsqrt - get the square root of n
 *@n: takes an integer value
 *@sqr: takes an integer value
 * Return: square root of n.
 */
int _getsqrt(int n, int sqr);

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n > 0)
	{
		return (_getsqrt(n, 1));
	}
	else
	{
		return (-1);
	}
}
/**
 *_getsqrt - get the square root of n
 *@n : takes an integer value
 *@sqr : takes an integer value
 * Return: sqr
 */
int _getsqrt(int n, int sqr)
{
	if (sqr * sqr == n)
	{
		return (sqr);
	}
	else if (sqr >= n)
	{
		return (-1);
	}
	return (_getsqrt(n, sqr + 1));
}
