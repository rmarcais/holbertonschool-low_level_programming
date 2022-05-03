#include "search_algos.h"
/**
 * print_array - Prints an array of integers.
 * @array: The array
 * @low: The beginning of the array
 * @size: The size of the array
 * Return: Nothing
 */
void print_array(int *array, int low, int size)
{
	if (low > size)
		return;
	printf(", %d", array[low]);
	print_array(array, low + 1, size);
}
/**
 * advanced_binary - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm.
 * @array: The array
 * @size: The size of the array
 * @value: The value to retrieve
 * Return: The the first index where value is located or NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	int low, high, middle, result = -1;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: %d", array[low]);
		if (size > 1)
			print_array(array, low + 1, high);
		printf("\n");
		middle = low + (high - low) / 2;

		if ((middle == 0 || array[middle - 1] < value)
		    && array[middle] == value)
		{
			return (middle);
		}

		if (array[middle] < value)
			low = middle + 1;
		else
			high = middle;
	}
	return (result);
}
