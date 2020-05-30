#include "hash_tables.h"

/**
 *hash_table_print - function to print hash table
 *@ht: pointer to hash table
 *
 *Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp = NULL;
	unsigned long int i;
	unsigned int x = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (x)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			x++;
		}
	}
	printf("}\n");
}
