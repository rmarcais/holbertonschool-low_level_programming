#include "main.h"
#include <string.h>
/**
 * _puts - check the code
 *@str: take a character value
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
