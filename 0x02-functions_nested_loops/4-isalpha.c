#include "main.h"
#include <ctype.h>
/**
 * _isalpha - Entry point
 *@c: take the integer value of the character
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
