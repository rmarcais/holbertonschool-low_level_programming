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
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	tmp->prev->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	return (1);
}
