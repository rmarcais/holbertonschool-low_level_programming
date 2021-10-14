#include "main.h"
#include <string.h>
/**
 * cap_string - capitalize a string
 *@str: points to a variable char
 * Return: Always 0.
 */
char *cap_string(char *str)
{
	int i, id, len = strlen(str);
	char ch[] = " \n\t,;.!?\"(){}";

	for (i = 0; i < len; i++)
	{
		for (id = 0; id < 14; id++)
		{
			if (str[i] == ch[id])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
					break;
				}
			}
		}
	}
	return (str);
}
