#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: the smallest value of the array
 *@max: the biggest value of the array
 * Return: a pointer to the newly created array or NULL.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == 0)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		*(ptr + i) = min;
		min++;
	}
	return (ptr);
}
