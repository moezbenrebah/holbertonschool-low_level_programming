#include "holberton.h"
#include <stdlib.h>

/**
 *malloc_checked - returns a pointer to the allocated memory
 *@b: integer
 *
 *Return: pointer
 */

void *malloc_checked(unsigned int b)
{
char *c;
unsigned int d = 98;

c = malloc(sizeof(int *) * b);

if (c == NULL)
exit(d);

else
return (c);
}
