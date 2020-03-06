#include "holberton.h"
#include <stdlib.h>

/**
 *_realloc - reallocate a new memory
 *@ptr: pointer
 *@old_size: integer
 *@new_size: integer
 *
 *Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
if (new_size > old_size)
{
free(ptr);
ptr = malloc(new_size);
return (ptr);
}

if (new_size == old_size)
return (ptr);

if (ptr == 0)
{
ptr = malloc(new_size);
return (ptr);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}
free(ptr);

return (ptr);
}
