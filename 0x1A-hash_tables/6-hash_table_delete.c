#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: The hash table.
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;

	while (i <= ht->size)
	{
		while (ht->array[i])
		{
			tmp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
