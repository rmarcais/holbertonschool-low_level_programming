#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees dogs
 * @d: points to a variable of type dog_t
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
