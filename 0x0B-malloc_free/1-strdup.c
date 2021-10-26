#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: points to a char
 *
 * Return: str or NULL
 */
int _strlen(char *str);
char *_strdup(char *str)
{

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		int len = _strlen(str);
		char *na = malloc(sizeof(char) * (len + 1));
		int id = 0;

		if (na == 0)
			return (NULL);
		while (str[id])
		{
		na[id] = str[id];
		id++;
		}
		return (na);
	}
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
