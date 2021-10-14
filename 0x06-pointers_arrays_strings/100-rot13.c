#include "main.h"
#include <string.h>
/**
 * rot13 - encode a string using rot13
 *@str: points to a variable char
 * Return: Always 0.
 */
char *rot13(char *str)
{
	int i, id, len = strlen(str);
	char s1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char s2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; i < len; i++)
	{
		for (id = 0; id < 52; id++)
		{
			if (str[i] == s1[id])
			{
				str[i] = s2[id];
				break;
			}
		}
	}
	return (str);
}
