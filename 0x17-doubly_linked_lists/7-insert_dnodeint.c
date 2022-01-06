#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: The list
 * @idx: The index
 * @n: The value of the node
 * Return: The adress of the new node or 0.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *tmp;
	unsigned int i;

	if (h == NULL || new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (*h == NULL)
	{
		*h = new;
		new->n = n;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	tmp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	if (new->next != NULL)
		new->next->prev = new;
	return (new);
}
