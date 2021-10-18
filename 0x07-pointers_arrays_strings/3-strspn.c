#include "main.h"
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 *@s: points to a character
 *@accept: points to a character
 * Return: an integer.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
