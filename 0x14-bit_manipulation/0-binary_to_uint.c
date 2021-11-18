#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsignde int.
 * @b: The number to convert represented by a character string.
 *
 * Return: 0 or the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, a, rem, len, sum, base;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	sum = 0;
	base = 1;
	for (i = 0; i < len; i++)
		if (b[i] != '1' && b[i] != '0')
		return (0);
	a = _atoi(b);
	while (a > 0)
	{
		rem = a % 10;
		sum += rem * base;
		a /= 10;
		base *= 2;
	}
	return (sum);
}
/**
 * _strlen - computes the size of str
 * @str: points to a char
 * Return: count.
 */
int _strlen(const char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}
/**
 * _atoi - check the code
 *@s: taje a character value
 * Return: Always 0.
 */
long int _atoi(const char *s)
{
	int sign = 1;
	long int num = 0;

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
