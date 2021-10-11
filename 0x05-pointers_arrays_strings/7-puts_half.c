#include "main.h"
#include <string.h>
/**
 * puts_half - check the code
 *@str: take a character value
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int n = strlen(str);
	int i;

	for (i = n / 2; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
