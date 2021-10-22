#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers"
 *@argc: counts the number of arguments
 *@argv: array of pointers
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	if (argc == 3)
	{
		int a = atoi(argv[1]), b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
