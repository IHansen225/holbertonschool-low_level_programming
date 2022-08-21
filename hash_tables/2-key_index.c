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
	return (hash_djb2(key) % size);
}
