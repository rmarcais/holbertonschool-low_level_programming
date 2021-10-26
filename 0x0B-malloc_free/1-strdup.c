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
	int len = _strlen(str);
	char *na = malloc(sizeof(char) * len);
	int id = 0;

	if (str[len - 1] == '\0')
		return ('\0');
	while (str[id])
	{
		na[id] = str[id];
		id++;
	}
	return (na);
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
