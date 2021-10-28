#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned ineteger
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
	{
		free(ptr);
		exit(98);
	}
	else
		return (ptr);
}
