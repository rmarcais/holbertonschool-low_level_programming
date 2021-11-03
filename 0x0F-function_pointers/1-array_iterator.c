#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of array
 * @array: Points to an array
 * @size: size of the array
 * @action: points to a fonction
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != 0 || size != 0 || action != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
