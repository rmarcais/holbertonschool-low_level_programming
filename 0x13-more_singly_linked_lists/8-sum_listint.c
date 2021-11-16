#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a listint_t list.
 * @head: The list
 * Return: NULL or the sum.
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
