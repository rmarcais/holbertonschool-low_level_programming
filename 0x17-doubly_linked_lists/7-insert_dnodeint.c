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
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (*h == NULL)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
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
