#include "main.h"
#include <string.h>
/**
 * string_toupper - changes lowercases to uppercases
 *@str: points a variable char
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
