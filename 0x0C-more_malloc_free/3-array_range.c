#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - create an array of integers
 *@min: integer
 *@max: integer
 *
 *Return: pointer
 */

int *array_range(int min, int max)
{
int *i, j, x = 0;
j = max - min + 1;

if (min > max)
return (NULL);

i = malloc(sizeof(int) * j);

if (i == 0)
return (NULL);

for (x = 0; x <= j; x++)
{
i[x] = min;
min++;
}

return (i);
}
