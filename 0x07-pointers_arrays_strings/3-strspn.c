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
	unsigned int i, j, result = 0;

	for (i = 0; s[i] != 32; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				result += 1;
			}
		}
	}
	return (result);
}
