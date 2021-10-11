#include "main.h"
#include <string.h>
/**
 * puts2 - check the code
 *@str: take a character value
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i, len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

