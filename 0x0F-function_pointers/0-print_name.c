#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: points to the name
 * @f: points to a function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0)
	{
		f(name);
	}
	free(name);
}
