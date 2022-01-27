#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: The hash table
 * @key: The key
 * @value: The value
 * Return: 0 or 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		new->key = strdup(key);
		new->value = strdup(value);
		ht->array[index] = new;
	}
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	if (strcmp(ht->array[index]->key, key) != 0)
	{
		new = add_node(strdup(key), strdup(value), &(ht->array[index]));
		if (new == 0)
			return (0);
	}
	return (1);
}
/**
 * add_node - adds a node at the beginning of the list
 * @k: The key
 * @val: The value
 * @head: Yhe head of the list
 * Return: 0 or the new node.
 */
hash_node_t *add_node(char *k, char *val, hash_node_t **head)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(k);
		free(val);
		return (0);
	}
	new->key = k;
	new->value = val;
	new->next = (*head);
	(*head) = new;
	return (new);
}
