#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: The list
 * @index: The index
 * Return: 1 or -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *next;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 2; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	next->prev = tmp;
	return (1);
}
