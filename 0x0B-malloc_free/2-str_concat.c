#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: points to a char
 *@s2: points to a char
 *@str: points to a char
 * Return: ar or NULL.
 */
int _strlen(char *str);
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	int len1 = _strlen(s1);
	int len2 = _strlen(s2);
	char *ar = malloc((len1 * sizeof(char)) + (len2 * sizeof(char)));

	if (ar == 0)
		return (NULL);
	if (s1 == NULL)
	{
		s1 = '\0';
		ar[0] = '\0';
	}
	else
	{
		while (s1[i])
		{
			if (s1 == NULL)
				ar[0] = '\0';
			else
			{
				ar[i] = s1[i];
				i++;
			}
		}
	}
	while (s2[j] != '\0')
	{
		if (s2 == NULL)
			ar[i] = '\0';
		else
		{
			ar[i] = s2[j];
			j++;
			i++;
		}
	}
	return (ar + '\0');
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
