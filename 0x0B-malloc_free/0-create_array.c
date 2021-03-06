#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars
 * @c: The character to print
 *@size: takes an integer value
 * Return: ar or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar = malloc(size * sizeof(c));

	if (size == 0)
		return ('\0');
	if (ar == 0)
		return ('\0');
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
