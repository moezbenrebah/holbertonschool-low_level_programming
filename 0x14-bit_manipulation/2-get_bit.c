#include "holberton.h"

/**
 *get_bit - get the value of a bit at a given index
 *@n: integer to check
 *@index: position of index to check
 *
 *Return: value of a bit
 */


int get_bit(unsigned long int n, unsigned int index)
{
unsigned int p;
if (index >= 32)
return (-1);
p = 1 << index;
p &= n;
p >>= index;

return (p);
}
