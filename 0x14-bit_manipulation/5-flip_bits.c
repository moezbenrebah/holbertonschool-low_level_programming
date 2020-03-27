#include "holberton.h"


/**
 *findbits - count number of bits to be flipped
 *@a: unsigned long integer
 *
 *Return: number of bits
 */

unsigned int findbits(unsigned long int a)
{
long int i = 0;


while (a)
{
i += a & 1;
a >>= 1;
}
return (i);
}

/**
 *flip_bits - bits need to flip from number to another
 *@n: unsigned integer
 *@m: unsigned integer
 *
 *Return: number of bit to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
return (findbits(n ^ m));
}
