#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int c = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			c = c + n;
		}
	}
	printf("%d", c);
	return (0);
}
