#include "hash_tables.h"

/**
 *hash_table_delete - function to delete a hash table
 *@ht: a pointer to hash table
 *
 *Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *next, *prev;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		next = ht->array[i];
		while (next)
		{
			prev = next;
			next = next->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}

