#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - check the code
 *@c: take an integer value
 * Return: Always 0.
 */
int print_last_digit(int c)
{
	c = c % 10;
	c = abs(c);
	_putchar(c + '0');
	return (c);
}
