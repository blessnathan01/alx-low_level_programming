#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: array size
 *
 * Return: a pointer to the newly created hash table
 * NULL if something went wrong.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *fresh_table = malloc(sizeof(hash_table_t));
	unsigned long int x;

	if (size == 0 || fresh_table == NULL)
		return (NULL);
	
	fresh_table->array = malloc(sizeof(void *) * size);
	if (fresh_table->array == NULL)
		return (NULL);
	
	fresh_table->size = size;
	for (x = 0; x < size; x++)
		fresh_table->array[x] = NULL;
	
	return (fresh_table);	
}
