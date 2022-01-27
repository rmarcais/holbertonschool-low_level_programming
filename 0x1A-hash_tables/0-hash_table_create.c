#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: The size of the array
 * Return: A pointer to the newly created hash table or NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (hashtable == NULL)
		return (NULL);
	hashtable->size = size;
	hashtable->array = malloc(size * sizeof(hash_node_t *));

	if (hashtable->array == NULL)
	{
		free(hashtable);
		return (NULL);
	}
	for (i = 0; i < hashtable->size; i++)
		hashtable->array[i] = NULL;
	return (hashtable);
}
