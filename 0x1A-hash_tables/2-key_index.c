#include "hash_tables.h"
/**
 * key_index - gives the index of a key.
 * @key: The key
 * @size: The size of the array of the hash table.
 * Return: The index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hashed_string = hash_djb2((unsigned char *)key);

	index = hashed_string % size;
	return (index);
}
