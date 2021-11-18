#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the integer.
 * @index: the index.
 * Return: Nothing.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num = n;
	unsigned int count = 0;

	while (n)
	{
		count++;
		n >>= 1;
	}
	if (index >= count)
		return (-1);
	else
		return (num >> index & 1);

}
