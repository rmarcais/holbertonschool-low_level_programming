#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 *@argc: Number of arguments
 *@argv: Array of pointers
 * Return: 0 or 1.
 */
int main(int argc, char *argv[])
{

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i = 1, j, sum = 0, len = strlen(argv[i]);

		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < len; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
