#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the min. number of coins to make change for amount of money.
 *@argc: Number of arguments
 *@argv: Array of pointers
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0, i;
	int change[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for (i = 0; cents > 0; i++)
	{
		coins += cents / change[i];
		cents = cents % change[i];
	}
	printf("%d\n", coins);
	return (0);
}
