#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm.
 * @array: The array
 * @size: The size of the array
 * @value: The value to retrieve
 * Return: The the first index where value is located or NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t s = 0, end = sqrt(size), i;

	printf("Value checked array[%ld] = [%d]\n", s, array[s]);

	while (array[end] < value && end < size)
	{
		s = end;
		end += sqrt(size);
		printf("Value checked array[%ld] = [%d]\n",
		       s, array[s]);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", s, end);
	for (i = s; i <= end; i++)
	{
		if (i == size)
			break;
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
