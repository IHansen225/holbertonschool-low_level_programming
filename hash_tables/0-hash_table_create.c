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
	unsigned long int i;

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
	for (i = 0; node_arr[i]; i++)
	{
		node_arr[i] = malloc(sizeof(hash_node_t));
		node_arr[i]->key = malloc(sizeof(char *));
		node_arr[i]->value = malloc(sizeof(char *));
		node_arr[i]->next = NULL;
		if (!node_arr[i] || !node_arr[i]->key || node_arr[i]->value)
		{
			for (; i > 0; i--)
			{
				free(node_arr[i]->key);
				free(node_arr[i]->value);
				free(node_arr[i]);
			}
			free(ht);
			return (NULL);
		}
	}
	ht->array = node_arr;
	return (ht);
}
