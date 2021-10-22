#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 *@argc: counts the number of arguments
 *@argv: array of pointers
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, count = 0;
	(void)argv;

	for (i = 1; i < argc; i++)
	{
		count ++;
	}
	printf("%d\n", count);
	return (0);
}
