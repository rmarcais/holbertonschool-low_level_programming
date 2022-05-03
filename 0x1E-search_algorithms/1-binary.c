#include "search_algos.h"
/**
 * print_array - Prints an array of integers.
 * @array: The array
 * @low: The beginning of the array
 * @high: The end of the array
 * Return: Nothing
 */
void print_array(int *array, int low, int high)
{
	int i;

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
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm.
 * @array: The array
 * @size: The size of the array
 * @value: The value to retrieve
 * Return: The the first index where value is located or NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int low, high, middle;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		print_array(array, low, high);
		middle = low + (high - low) / 2;

		if (array[middle] == value)
			return (middle);

		if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;
	}
	return (-1);
}

