#include "hash_tables.h"

/**
 * hash_table_delete - hash table delete
 *
 * @ht: hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *aux_node, *prev_node;
	unsigned long int index;

	if (!ht)
	{}
	else
	{
		for (index = 0; index < ht->size; index++)
		{
			if ((ht->array)[index])
			{
				aux_node = ht->array[index];
				while (aux_node)
				{
					prev_node = aux_node;
					free(aux_node->key);
					free(aux_node->value);
					aux_node = aux_node->next;
					free(prev_node);
				}
			}
			free(ht->array);
			free(ht);
		}
	}
}
