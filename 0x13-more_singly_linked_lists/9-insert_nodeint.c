#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: The list
 * @idx: index of the list where the new node should be added
 * @n: the integer in the node
 * Return: NULL or the adress of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(new));
	listint_t *tmp;
	unsigned int i;

	if (head == NULL || *head == NULL || new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	for (i = 0; i < idx; i++)
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
	return (new);
}
