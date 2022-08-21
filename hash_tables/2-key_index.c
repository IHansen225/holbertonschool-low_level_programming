#include "hash_tables.h"

/**
 * key_index - return index of a key in the hash table
 *
 * @size: size of the hash table
 * @key: key to search
 * Return: a new hash table index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index = 0;

	hash = hash_djb2(key);
	while (hash > 0)
	{
		if (((hash % 10) + index) < size)
		{
			index += (hash % 10);
			hash = (int)(hash / 10);
		}
	}
	return (index);
}
