#include "hash_tables.h"

/**
 * hash_table_get - hash table get element
 *
 * @ht: hash table
 * @key: element key
 * Return: value if successful, NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux_node;

	index = key_index((unsigned char *)key, ht->size);
	if (!(ht->array)[index])
		return (NULL);
	else
	{
		aux_node = (ht->array)[index];
		while (aux_node)
		{
			if (strcmp(aux_node->key, key) == 0)
				return (aux_node->value);
			else
				aux_node = aux_node->next;
		}
	}
	return (NULL);
}