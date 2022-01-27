#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: The hash table we want to look into.
 * @key: The key we are looking for.
 * Return: NULL or the value associated with the element.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);
	return (ht->array[index]->value);
}
