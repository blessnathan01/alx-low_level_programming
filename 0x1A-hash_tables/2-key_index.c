#include "hash_tables.h"

/**
 * key_index - gives an index of a key
 * @key: the key
 * @size: array size of the hash table
 *
 * Return: the index at which the kwy/value pair should be
 * stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);	
}
