#include "holberton.h"


/**
 *clear_bit - sets the value of a bit to 0 at a given index
 *@n: number to set
 *@index: index to set a bit
 *
 *Return: 1 if it worked, or -1 if an error occurred
 */


int clear_bit(unsigned long int *n, unsigned int index)
{

unsigned int p;

if (index >= 32)
return (-1);
p = 1 << index;
*n &= ~(p);
return (1);
}
