#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: the string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == 0)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != n - 1 && separator != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
