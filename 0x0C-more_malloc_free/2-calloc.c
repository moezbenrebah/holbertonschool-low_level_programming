#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: integer
 *@size: integer
 *
 *Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i, j;
char *c;

if (nmemb == 0 || size == 0)
return (NULL);
c = malloc (nmemb * size);
if (c == 0)
return (NULL);
for (i = 0; i <= nmemb; i++)
{
for (j = 0; j < size; j++)
c[j] = 0;
}
return (c);
}
