#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table.
 * @ht: The hash table.
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int t = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	i = 0;
	while (i <= ht->size)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp)
			{
				if (t == 0)
				{
					printf("'%s': '%s'", tmp->key,
					       tmp->value);
					t++;
				}
				else
					printf(", '%s': '%s'", tmp->key,
					       tmp->value);
				tmp = tmp->next;
			}
		}
		i++;
	}
	printf("}\n");
}
