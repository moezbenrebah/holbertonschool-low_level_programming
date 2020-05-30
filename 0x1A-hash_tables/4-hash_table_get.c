#include "hash_tables.h"

/**
 *hash_table_get - retrieve a key value from a hashtable
 *@ht: pointer to hash table
 *@key: pointer to key
 *
 *Return: key value in success, otherwise NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int i;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];

	if (!tmp)
		return (NULL);
	while ((tmp && tmp->key) && strcmp(tmp->key, key))
		tmp = tmp->next;
	return (tmp->value);
}
