#include "main.h"
#include <string.h>
/**
 * _strncpy - copies a string
 *@dest: points a variable char
 *@src: points a variable char
 *@n: take an integer value
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}

