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
	unsigned int long i;

	i = hash_djb2(key);
	return (i % size);
}
