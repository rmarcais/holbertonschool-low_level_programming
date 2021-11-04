#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (separator != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, const unsigned int));
			if (i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	va_end(ap);
}
