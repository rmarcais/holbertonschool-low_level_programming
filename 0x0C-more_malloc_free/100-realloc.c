#include "main.h"
#include <stdlib.h>
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer of type void *
 * @old_size: takes an unsigned int value
 *@new_size: takes an unsigned int value
 * Return: nptr.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	newptr = malloc(new_size);
	if (newptr == 0)
		return (NULL);
	_memcpy(newptr, ptr, old_size);
	free(ptr);
	return (newptr);
}
/**
 * _memcpy - copies memory area
 * @dest: points to a character
 * @src: points to a character
 *@n: takes an unigned integer value
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
