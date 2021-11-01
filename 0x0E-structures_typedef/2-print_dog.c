#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: points to a variable of type struct dog
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");
		if (d->age != 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: 0\n");
		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
