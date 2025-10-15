#include "main.h"
/**
 * _isdigit - check the code
 *@c: take an integer value
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
