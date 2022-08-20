#include "hash_tables.h"

/**
 * hash_table_create - create a new hash table
 *
 * @size: size of the hash table
 * Return: a new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **node_arr;
	int i;

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	node_arr = malloc(size);
	if (!node_arr)
	{
		free(ht);
		return (NULL);
	}
	for (i = 0; i <= ((size/(sizeof(hash_node_t))) - 1); i++)
	{
		node_arr[i] = malloc(sizeof(hash_node_t));
		if (!node_arr[i])
		{
			for (; i >= 0; i--)
				free(node_arr[i]);
			free(ht);
			return (NULL);
		}
	}
	ht->array = node_arr;
	return (ht);
}
