#include "main.h"
/**
 * is_prime_number - returns 1(0 if not)if the input integer is a prime number
 *@n: takes an integer value
 *@a: takes an integer value
 * Return: 1 or 0.
 */
int _isprime(int n, int a);

int _sqrt_recursion(int n);

int _getsqrt(int n, int sqr);

int is_prime_number(int n)
{
	if (n == 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (_isprime(n, 2) == 1)
		return (1);
	else
		return (0);
}
/**
 * _isprime - cheks if n is prime
 *@n: takes an integer value
 *@a: takes an integer value
 * Return: 1 or 0
 */
int _isprime(int n, int a)
{
	if (n <= 0)
	{
		return (0);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	if (a > _sqrt_recursion(n))
	{
		return (1);
	}
	if (n % a == 0)
	{
		return (0);
	}
	return (_isprime(n, a + 1));
}
/**
 * _sqrt_recursion - return the sqrt of n
 *@n: takes an integer value
 * Return: 0 or 1
 */
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
