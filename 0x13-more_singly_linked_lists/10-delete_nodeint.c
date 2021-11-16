#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a linked list.
 * @head: The list
 * @index: index of the node that should be deleted.
 * Return: 1 if it succeeded or -1 it it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *next;
	unsigned int i;

	if (*head == NULL || head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
	}
	next = tmp->next->next;
	free(tmp->next);
	tmp->next = next;
	return (1);
}
