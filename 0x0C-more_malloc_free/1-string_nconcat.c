#include <stdlib.h>
#include "main.h"
int _strlen(char *str);

/**
 * string_nconcat - concatenates two strings
 * @s1: point to a char
 *@s2: points to a char
 *@n: concatenates n bytes of s2 to s1
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int len1, len2;
	char *ar;
	unsigned int p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len2 = _strlen(s2);
	if (n >= len2)
		n = len2;
	len1 = _strlen(s1);
	ar = malloc((len1 + len2 + n + 1) * sizeof(char));

	if (ar == 0)
		return (NULL);
	while (i < len1)
	{
		*(ar + i) = *(s1 + i);
		i++;
	}
	p = len1;
	while (p < (len1 + n))
	{
		*(ar + p) = *(s2 + j);
		p++;
		j++;
	}
	*(ar + (len1 + n)) = '\0';
	return (ar);
}
/**
 * _strlen - computes the size of str
 * @str: points to a char
 * Return: count.
 */
int _strlen(char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}
