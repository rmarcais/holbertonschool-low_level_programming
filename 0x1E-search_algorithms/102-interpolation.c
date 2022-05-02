#include "search_algos.h"
/**
 * interpolationSearch - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 * @array: The array
 * @low: The lowest index
 * @high: The highrst index
 * @value: The value to retrieve
 * Return: The the first index where value is located or NULL
 */
int interpolationSearch(int *array, int low, int high, int value)
{
	size_t pos = low + (((double)(high - low)
			      / (array[high] -
				 array[low])) * (value - array[low]));

	if (low <= high && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			return (interpolationSearch(array, pos + 1,
						     high, value));
		if (array[pos] > value)
			return (interpolationSearch(array, low,
						     pos - 1, value));
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm.
 * @array: The array
 * @size: The size of the array
 * @value: The value to retrieve
 * Return: The the first index where value is located or NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high;

	if (array == NULL || size == 0)
		return (-1);
	high = size - 1;
	return (interpolationSearch(array, low, high, value));
}
