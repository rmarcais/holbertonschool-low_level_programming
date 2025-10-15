#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	 unsigned long int n_1 = 0, n_2 = 1, new, c;

	for (c = 0; c <= 97; c++)
	{
		new = n_1 + n_2;
		n_1 = n_2;
		n_2 = new;
		printf("%lu", new);
		if (c != 97)
		{
			printf(", ");
		}
	}
	putchar('\n');
	return (0);
}
