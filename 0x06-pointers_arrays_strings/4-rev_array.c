#include "main.h"
/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int b;

		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
