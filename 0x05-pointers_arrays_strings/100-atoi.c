#include "main.h"
#include <stdlib.h>
/**
 * _atoi - check the code
 *@s: taje a character value
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= 48 && *s <= 57)
		{
			num = num * 10 + (*s - '0');
		}
		else if (num > 0)
		{
			break;
		}
		s++;
	}
	return (num * sign);
}
