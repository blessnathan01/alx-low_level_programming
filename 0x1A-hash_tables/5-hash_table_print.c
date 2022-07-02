#include "hash_tables.h"

/**
  * hash_table_print - prints a hash table
  * @ht: the hash table
  *
  * Return: nothing.
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0;
	int flag = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (flag == 0)
					flag = 1;
				else
					printf(", ");

				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
			}
		}
		printf("}\n");
	}
}
