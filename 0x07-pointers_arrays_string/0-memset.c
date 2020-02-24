#include "holberton.h"

/**
 * _memset - used to fill a block of memory with a particular value
 * @s : area of memory
 * @b : constant byte
 * @n : bytes to fill in memory
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

unsigned int i;

i = 0;

while (i < n)
{
*(s + i) = b;
i++;
}

return (s);
}
