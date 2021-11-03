#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: points to an array
 * @size: size of the array
 * @cmp: pointers to a function
 * Return: i or -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) == 1)
		{
			cmp(array[i]);
			return (i);
		}
		i++;
	}
	return (-1);
}
