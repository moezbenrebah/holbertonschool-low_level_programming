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

c = malloc(b);

if (c == NULL)
exit(98);

return (c);
}
