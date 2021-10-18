#include "main.h"
#include <string.h>
/**
 * _memset - prints buffer in hexa
 * @s: points to a character
 * @b: character
 *@n: take an unsigned integer value
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

