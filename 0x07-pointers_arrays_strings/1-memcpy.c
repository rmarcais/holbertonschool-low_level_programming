#include "main.h"
#include <string.h>
/**
 * _memcpy - prints buffer in hexa
 * @dest: points to a character
 * @src: points to a character
 *@n: takes an unigned integer value
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
