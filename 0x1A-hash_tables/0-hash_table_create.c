#include "hash_tables.h"


/**
 * hash_table_create - function to create a hash table
 * @size: size of hash table
 *
 *Return: pointer to the newely created hash table in success, otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (!size)
	{
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (!table)
	{
		return (NULL);
	}

	table->array = malloc(size * sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	return (table);
}
