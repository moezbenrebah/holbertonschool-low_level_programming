#include "holberton.h"


/**
 *findbits - count number of bits to be flipped
 *@a: integer
 *
 *Return: number of bits
 */

int findbits(int a)
{
int i = 0;

while (a)
{
i += a & 1;
a >>= 1;
}
return (i);
}

/**
 *flip_bits - bits need to flip from number to another
 *@n: integer
 *@m: integer
 *
 *Return: number of bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return (findbits(n ^ m));
}
