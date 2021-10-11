#include "main.h"
#include <string.h>
/**
 * rev_string - check the code
 *@s: take a character value
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a = strlen(s), i;

	for (i = 0; i < a / 2; i++)
	{
		char ch = s[i];

		s[i] = s[a - i - 1];
		s[a - i - 1] = ch;
	}
}
