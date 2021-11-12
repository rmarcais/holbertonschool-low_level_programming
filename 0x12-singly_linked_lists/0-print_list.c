#include "lists.h"
/**
 * print_list - prints all the element of a list_t list.
 * @h: list to print
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == 0)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		count++;
	}
	return (count);
}
