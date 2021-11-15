#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: The list
 * @n: the integer in the node.
 * Return: The adress of the new element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(new));
	listint_t *lastnode = *head;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = new;
	}
	return (new);
}
