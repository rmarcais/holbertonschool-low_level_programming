#include "main.h"
#include <string.h>

/**
 * print_rev - check the code
 *@s: take a character value
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, a = strlen(s);

	for (i = a - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
