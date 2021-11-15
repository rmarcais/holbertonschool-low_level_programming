#include "lists.h"
/**
 * pop_listint - deletes the head node.
 * @head: The list
 * Return: 0 or the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	tmp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
