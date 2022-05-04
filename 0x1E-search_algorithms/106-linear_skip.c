#include "search_algos.h"
/**
 * linear_skip - function that searches for a value in a sorted skip list
 * of integers.
 * @list: The list
 * @value: The value to retrieve
 * Return: The the first index where value is located or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t i;
	skiplist_t *tmp;

	if (list == NULL)
		return (NULL);
	while (list != NULL)
	{
		tmp = list;
		if (list->express != NULL)
			list = list->express;
		else
		{
			for (i = list->index; list->next; i++)
				list = list->next;
		}
		if (list->next != NULL)
			printf("Value checked at index [%ld] = [%d]\n",
			       list->index, list->n);
		if (list->n >= value || list->next == NULL)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       tmp->index, list->index);
			break;
		}
		if (list->next == NULL)
			break;
	}
	for (i = tmp->index; i <= list->index && tmp != NULL; i++)
	{
		printf("Value checked at index [%ld] = [%d]\n",
		      tmp->index, tmp->n);
		if (tmp->n == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}
