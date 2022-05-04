#include "search_algos.h"
#include <math.h>
/**
 * jump_list - function that searches for a value in a sorted list
 * of integers using the Jump search algorithm.
 * @list: The list
 * @size: The number of nodes in list
 * @value: The value to retrieve
 * Return: The the first index where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int step, prev, i;
	listint_t *tmp;

	if (list == NULL || size == 0)
		return (NULL);
	step = sqrt(size);
	prev = 0;
	while (list != NULL)
	{
		tmp = list;
		for (i = prev; i < step && list->next != NULL; i++)
		{
			list = list->next;
		}
		printf("Value checked at index [%ld] = [%d]\n",
		       list->index, list->n);
		if (list->n < value && list->next != NULL)
		{
			prev = step;
			step += sqrt(size);
		}
		else
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       tmp->index, list->index);
			break;
		}
		if (list->next == NULL)
			break;
	}
	for (i = prev; i < step && tmp != NULL; i++)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		      tmp->index, tmp->n);
		if (tmp->n == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
