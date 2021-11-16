#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: The list
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode;
	listint_t *curNode;

	if (head == NULL || *head == NULL)
		return (NULL);
	prevNode = *head;
	curNode = (*head)->next;
	*head = (*head)->next;
	prevNode->next = NULL;
	while (*head)
	{
		*head = (*head)->next;
		curNode->next = prevNode;
		prevNode = curNode;
		curNode = *head;
	}
	*head = prevNode;
	return (*head);
}
