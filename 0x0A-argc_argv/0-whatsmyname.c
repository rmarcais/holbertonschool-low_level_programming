#include "main.h"
#include <stdio.h>
/**
 * main - prints the name of the proram
 *@agrv: array of pointers
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv[0]);
	return (0);
}
