#include "hash_tables.h"

/**
 *key_index - function that the index of a given key
 *@key: a pointer to a key
 *@size: the size of hash table
 *
 *Return: the index of key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int i;

	for (i = 0; key[i] < size; i++)
	{
		if (key[i] == i)
			return (i);
	}
	return (-1);
}
