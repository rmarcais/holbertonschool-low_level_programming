#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsignde int.
 * @b: The number to convert represented by a character string.
 *
 * Return: 0 or the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_num, base;
	int len;

	if (b == NULL)
		return (0);
	len = _strlen(b);
	base = 1;
	decimal_num = 0;
	for (len = len - 1; len >= 0; len--)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);
		decimal_num += (b[len] - '0') * base;
		base *= 2;
	}
	return (decimal_num);
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
