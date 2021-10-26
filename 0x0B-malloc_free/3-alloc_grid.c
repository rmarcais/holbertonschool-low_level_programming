#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: whidh og the array
 * @height: height of the array
 * Return: da or NULL.
 * On error, -1 is returned, and errno is set appropriately.
 */
int **alloc_grid(int width, int height)
{
	int **ar, a, b, c;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(height * sizeof(*ar));
	if (ar == 0)
		return (NULL);
	for (a = 0; a < width; a++)
	{
		ar[a] = malloc(width * sizeof(**ar));
		if (ar[a] == 0)
		{
			while (a >= 0)
			{
				free(ar[a]);
				a--;
			}
			free(ar);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			ar[b][c] = 0;
		}
	}
	return (ar);
}
