#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct type - Struct op
 *
 * @type: type of the variable
 * @f: points to fonctions
 */
typedef struct type
{
	char *type;
	void (*f)(va_list ap);
} type_t;
void print_char(char *separator, va_list ap);
void print_int(char *separator, va_list ap);
void print_str(char *separator, va_list ap);
void print_float(char *separator, va_list ap);
#endif
