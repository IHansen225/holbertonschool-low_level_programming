#include "hash_tables.h"

/**
 * hash_table_print - hash table print element
 *
 * @ht: hash table
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	int nf = 0;
	hash_node_t *aux_node;

	if (!ht)
	{}
	else
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			if ((ht->array)[index])
			{
				aux_node = ht->array[index];
				while (aux_node)
				{
					if (nf && ((ht->array)[index]))
						printf(", ");
					printf("'%s': ", (aux_node->key));
					printf("'%s'", (aux_node->value));
					aux_node = aux_node->next;
					nf = 1;
				}
			}
		}
		printf("}\n");
	}
}
