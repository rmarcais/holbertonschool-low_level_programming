#include "main.h"
#include <stdlib.h>
char *_memcpy(char *dest, char *src, unsigned int n);
int _strlen(char *str);
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

	ptr = malloc(old_size);

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		ptr = malloc(new_size);
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	_memcpy(newptr, ptr, _strlen(ptr));
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
/**
 * _strlen - computes the size of str
 * @str: points to a char
 * Return: count.
 */
int _strlen(char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}
