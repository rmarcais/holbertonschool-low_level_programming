#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: The list
 * @str: the string of character in the node.
 * Return: The adress of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(new));

	if (head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
/**
 * _strlen - computes the size of str
 * @str: points to a char
 * Return: count.
 */
int _strlen(const char *str)
{
	int count = 0;

	while (str[count])
	{
		count++;
	}
	return (count);
}
