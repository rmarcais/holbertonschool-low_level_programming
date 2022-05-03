#include "search_algos.h"
/**
 * print_array - Prints an array of integers.
 * @array: The array
 * @low: The beginning of the array
 * @high: The end of the array
 * Return: Nothing
 */
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
	}
	printf("\n");
}
/**
 * min - Finds the minimum between two values
 * @a: THe first integer
 * @b: The second integer
 * Return: The minimum (a or b)
 */
int min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
/**
 * binarySearch - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm.
 * @array: The array
 * @low: The lowest index of the array
 * @high: The highest index of the array
 * @value: The value to retrieve
 * Return: The the first index where value is located or NULL
 */
int binarySearch(int *array, size_t low, size_t high, int value)
{
	size_t mid = low + (high - low) / 2;

	printf("Value found between indexes [%ld] = [%ld]\n", low, high);

	while (low <= high)
	{
		print_array(array, low, high);
		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm.
 * @array: The array
 * @size: The size of the array
 * @value: The value to retrieve
 * Return: The the first index where value is located or NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (array == NULL || size == 0)
		return (-1);

	if (array[0] == value)
		return (0);

	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	return (binarySearch(array, i / 2, min(i, size - 1), value));
}
