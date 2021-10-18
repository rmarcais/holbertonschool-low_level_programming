#include "main.h"
#include <string.h>
/**
 * _strstr - clocates a substring
 *@haystack: points to a pointer
 *@needle: points to a character
 * Return: a pointers.
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + j))
		{
			j++;
			if(*(needle + j) - (j - 1))
			{
				return ((haystack + i) - (j - 1));
			}
		}
		else
		{
			j = 0;
		}
	        i++;
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
	return ('\0');
}
