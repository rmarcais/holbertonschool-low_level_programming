#include <stdio.h>
#include <math.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int num = 612852475143, i;

	while (num % 2 == 0)
	{
		num = num / 2;
	}
	for (i = 3; i <= sqrt(num); i++)
	{
		while (num % i == 0)
		{
			num = num / i;
		}
	}
	printf("%lu\n", num);
	return (0);
}
