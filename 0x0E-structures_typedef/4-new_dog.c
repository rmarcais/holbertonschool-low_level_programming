#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dogs
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: dog or NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == 0)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
