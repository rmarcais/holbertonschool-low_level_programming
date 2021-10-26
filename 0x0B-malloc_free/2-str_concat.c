#include "main.h"
#include <stdlib.h>
int _strlen(char *str);
/**
 * str_concat - concatenates two strings
 *@s1: points to a char
 *@s2: points to a char
 * Return: ar or NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1, len2;
	char *ar;
	int p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	ar = malloc((len1 + len2 + 1) * sizeof(char));

	if (ar == NULL)
		return (NULL);

	while (i < len1)
	{
		*(ar + i) = *(s1 + i);
		i++;
	}
	p = len1;
	while (p < (len1 + len2))
	{
		*(ar + p) = *(s2 + j);
		p++;
		j++;
	}
	*(ar + (len1 + len2)) = '\0';
	return (ar);
}
/**
 * _strlen - computes the size of str
 * @str: points to a char
 * Return: count.
 */
int _strlen(char *str)
{
	int i = 0, count;

	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}
