#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n_1 = 0, n_2 = 1, new, c;

	for (c = 0; c <= 49; c++)
	{
		new = n_1 + n_2;
		n_1 = n_2;
		n_2 = new;
		printf("%ld", new);
		if (c != 49)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
