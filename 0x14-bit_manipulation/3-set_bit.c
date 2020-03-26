#include "holberton.h"

/**
 *set_bit - sets a bit at a specific index
 *@n:number of index to set
 *@index: index
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */


int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int p;

if (index >= 32)
return (-1);

p = 1 << index;
*n |= p;

return (1);
}
