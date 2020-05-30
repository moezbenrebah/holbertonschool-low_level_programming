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
	unsigned int long i;
	hash_node_t *new = NULL, *tmp;


	if (!ht || !key || !*key || !value)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[i];

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (!new->value)
	{
		free(new);
		return (0);
	}
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
