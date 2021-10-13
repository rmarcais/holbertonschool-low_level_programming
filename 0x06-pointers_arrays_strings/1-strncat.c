#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 *@dest: points a variable char
 *@src: points a variable char
 *@n: take an integer value
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

