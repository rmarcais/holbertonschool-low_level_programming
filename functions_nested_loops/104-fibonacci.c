#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int n_1 = 0, n_2 = 1, new, c;
	unsigned long int n1_h, n2_h, n1_l, n2_l, high, low;

	for (c = 0; c < 92; c++)
	{
		new = n_1 + n_2;
		n_1 = n_2;
		n_2 = new;

		printf("%lu, ", new);
	}

	n1_h = n_1 / 1000000000;
	n1_l = n_1 % 1000000000;
	n2_h = n_2 / 1000000000;
	n2_l = n_2 % 1000000000;

	for (; c < 98; c++)
	{
		high = n1_h + n2_h;
		low = n1_l + n2_l;

		if (low >= 1000000000)
		{
			low -= 1000000000;
			high += 1;
		}
		printf("%lu%lu", high, low);

		if (c != 97)
			printf(", ");

		n1_h = n2_h;
		n1_l = n2_l;
		n2_h = high;
		n2_l = low;
	}
	putchar('\n');
	return (0);
}
