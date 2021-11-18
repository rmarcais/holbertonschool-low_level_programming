#include "main.h"
/**
 * flip_bits - returns the n of bits you would need to flip to get from n to m.
 * @n: the integer.
 * @m: the second integer.
 * Return: 1 or -1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;

	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
