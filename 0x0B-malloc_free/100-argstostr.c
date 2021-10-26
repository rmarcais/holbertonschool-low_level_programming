#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: counts the number of arguments
 *@av: argument
 * Return: A pointer to a new string or NULL.
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i, j, a, b, z = 0;
	char *ar;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}
	ar = malloc(len * sizeof(char) + 1);

	if (ar == 0)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			ar[z] = av[a][b];
			z++;
		}
		ar[z] = '\n';
		z++;
	}
	return (ar);
}
