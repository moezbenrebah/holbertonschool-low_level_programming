#include "hash_tables.h"

/**
 *hash_table_set - function to insert element
 *@ht: pointer to hash table
 *@key: a pointer to a key
 *@value: a pointer to a value
 *
 *Return: 1 in success, otherwise 0
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *new = NULL;

	unsigned int long i;

	if (!ht || !key || !*key || !value)
		return (0);
	i = key_index((unsigned char *)key, ht->size);

	if (ht->array[i])
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			if (!strcmp(tmp->key, key))
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		new = malloc(sizeof(hash_node_t *));
		if (!new)
			return (0);
		new->value = strdup(value);
		new->key = strdup(key);
		new->next = NULL;
		new->next = ht->array[i];
		ht->array[i] = new;
	}
	else
	{
		ht->array[i] = new;
	}
	return (1);
}
