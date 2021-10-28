#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: takes an unsigned value
 *@size: takes an ansigned value
 * Return: a pointer to the allocate memory or NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*(ptr + i) = 0;
	return (ptr);
}
