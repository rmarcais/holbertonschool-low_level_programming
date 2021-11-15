#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: The list
 *
 * Return: The number of elements or 0.
 */
size_t listint_len(const listint_t *h)
{
	int count;

	if (h == 0)
		return (0);
	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
