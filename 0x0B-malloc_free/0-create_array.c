#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - create array of characters
 *@size: the size of the array
 *@c: the array initialization
 *
 *Return: character
 */

char *create_array(unsigned int size, char c)
{
unsigned int p;
char *m;

if (size == 0)
{
return (NULL);
}
m = malloc(sizeof(char) * size);
if (m == NULL)
{
return (NULL);
}
p = 0;
while (p < size)
{
m[p] = c;
p++;
}
return (m);
}
