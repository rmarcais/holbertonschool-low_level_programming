#include "main.h"
#include <string.h>
/**
 * leet - encodes a string into 1337
 *@s: points a variable char
 * Return: Always 0.
 */
char *leet(char *s)
{
	int i, id;
	int len = strlen(s);
	char letter[] = "aAeEoOtTlL";
	char new[] = "4433007711";

	for (i = 0; i < len; i++)
	{
		for (id = 0; id < 10; id++)
		{
			if (s[i] == letter[id])
			{
				s[i] = new[id];
			}
		}
	}
	return (s);
}
