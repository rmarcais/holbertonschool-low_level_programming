#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	type_t remi[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_str},
		{"f", print_float},
		{NULL, NULL}
		};
	char *separator = "";

	va_start(ap, format);

	while (format[i] && format != 0)
	{
		j = 0;
		while (remi[j].type)
		{
			if (format[i] == *remi[j].type)
			{
				remi[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
/**
 * print_char - prints a character
 * @separator: separator
 * @ap: name of the va_list
 * Return: Nothing.
 */
void print_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}
/**
 * print_int - prints an integer
 * @separator: separator
 * @ap: name of the va_list
 * Return: Nothing.
 */
void print_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}
/**
 * print_str - prints a string
 * @separator: separator
 * @ap: name of the va_list
 * Return: Nothing.
 */
void print_str(char *separator, va_list ap)
{
	char *string;

	string = va_arg(ap, char *);
	if (string == 0)
	{
		printf("%s(nil)", separator);
		return;
	}
	printf("%s%s", separator, string);
}
/**
 * print_float - prints a float
 * @separator: separator
 * @ap: name of the va_list
 * Return: Nothing.
 */
void print_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}
