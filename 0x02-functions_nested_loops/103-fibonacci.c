#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int n_1 = 0, n_2 = 1, new, c, sum = 0;

	for (c = 0; c <= 25; c++)
	{
		new = n_1 + n_2;
		n_1 = n_2;
		n_2 = new;
		if (new % 2 == 0 && new < 4000000)
		{
			sum = sum + new;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
