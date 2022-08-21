#include "hash_tables.h"

/**
 * hash_table_delete - hash table delete
 *
 * @ht: hash table
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	if (!ht)
	{}
	else
		free(ht);
}
