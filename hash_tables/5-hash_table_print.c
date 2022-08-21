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

	printf("{");
	if (!ht)
		printf("}\n");
	else
	{
		for (index = 0; index < ht->size; index++)
		{
			if ((ht->array)[index])
			{
				printf("'%s': ", ((ht->array)[index])->key);
				printf("'%s'", ((ht->array)[index])->value);
				if (((ht->array)[index])->next != NULL)
					printf(", ");
			}
		}
		printf("}\n");
	}
}
