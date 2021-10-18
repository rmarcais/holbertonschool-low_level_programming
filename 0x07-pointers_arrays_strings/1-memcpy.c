#include "main.h"
#include <string.h>
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

	for (i = 1; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
