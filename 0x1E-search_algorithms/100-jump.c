#include "search_algos.h"
#include <math.h>
/**
 * min - Finds the minimum between two values
 * @a: THe first integer
 * @b: The second integer
 * Return: The minimum (a or b)
 */
size_t min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
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
	int step = sqrt(size), tmp_s = step;
	size_t prev = 0, tmp_p = prev;

	if (array == NULL || size == 0)
		return (-1);
	if (array[min(step, size) - 1] >= value)
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		tmp_s = step;
		tmp_p = prev;
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			break;
	}
	prev = tmp_p;
	step = tmp_s;
	printf("Value found between indexes [%ld] and [%d]\n", prev, step);
	while (array[prev] < value && prev < size)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
