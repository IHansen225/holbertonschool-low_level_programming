#include "hash_tables.h"

/**
 * hash_table_print - hash table print element
 *
 * @ht: hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *aux_node;

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
					if (aux_node->key)
						free(aux_node->key);
					if (aux_node->value)
						free(aux_node->value);
					aux_node = aux_node->next;
				}
				free(aux_node);
			}
		}
	}
}
