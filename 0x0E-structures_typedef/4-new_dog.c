#include <stdlib.h>
#include "dog.h"
int _strlen(char *str);
char *_strcpy(char *dest, char *src);
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
	char *cpname;
	char *cpowner;

	cpname = malloc(sizeof(char) * (_strlen(name) + 1));
	cpowner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (cpowner == 0 || cpname == 0)
	{
		free(cpowner);
		free(cpname);
		return (NULL);
	}
	_strcpy(cpname, name);
	_strcpy(cpowner, owner);

	dog = malloc(sizeof(dog_t));
	if (dog == 0)
	{
		free(cpname);
		free(cpowner);
		return (NULL);
	}
	dog->name = cpname;
	dog->age = age;
	dog->owner = cpowner;
	return (dog);
}
/**
 * _strlen - computes the size of str
 * @str: points to a char
 * Return: count.
 */
int _strlen(char *str)
{
	int i = 0, count = 0;

	while (str[i])
	{
		count++;
		i++;
	}
	return (count);
}
/**
 * _strcpy - copy the string pointed to by src to the buffer pointed to by dest
 *@dest: take a character value
 *@src: take an other character value
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
