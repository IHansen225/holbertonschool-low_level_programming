#include "hash_tables.h"

/**
 * hash_table_set - hash table add element
 *
 * @ht: hash table
 * @key: element key
 * @value: element value
 * Return: 0 if successful, 1 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *aux_node;
	unsigned long int index;

	if(!ht)
		return (1);
	index = key_index((unsigned char *)key, ht->size);
	if (!(ht->array)[index])
	{
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (1);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		aux_node = (ht->array)[index];
		new_node = malloc(sizeof(hash_node_t));
		if (!new_node)
			return (1);
		new_node->key = strdup(key);
		new_node->value = strdup(value);
		new_node->next = aux_node;
		(ht->array)[index] = new_node;
	}

	return (0);
}
