#include "main.h"
#include <string.h>
/**
 * cap_string - capitalize a string
 *@str: points to a variable char
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if (str[i] != '!' && str[i] != '-')
		{
			if (str[i] >= 0 && str[i] <= 64)
			{
				i++;
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
			}
			if (str[i] >= 91 && str[i] <= 96)
			{
				i++;
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
			}
			if (str[i] >= 123 && str[i] < 127)
			{
				i++;
				if (str[i] >= 97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
			}
			if (str[i] == '\n')
			{
				i++;
				str[i] = str[i] - 32;
			}
		}

	}
	return (str);
}
