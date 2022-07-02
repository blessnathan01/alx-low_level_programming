#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmpA, *tmpB;
	unsigned long int x = 0;

	if (ht == NULL)
		return;
	while (x < ht->size)
	{
		tmpA = ht->array[x];
		while (tmpA != NULL)
		{
			tmpB = tmpA->next;
			free(tmpA->key);
			free(tmpA->value);
			free(tmpA);
			tmpA = tmpB;
		}
		x++;
	}
	free(ht->array);
	free(ht);
}
