#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add/update the key/value to
 * @key: the key which can not be an empty string
 * @value: the value associated with the key which must be
 * duplicated and can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_node, *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	tmp = ht->array[i];

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);

	hash_node->key = strdup(key);
	hash_node->value = strdup(value);
	hash_node->next = ht->array[i];
	ht->array[i] = hash_node;
	return (1);
}
