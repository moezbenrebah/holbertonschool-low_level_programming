#include "holberton.h"

/**
 *get_endianness - checks the endianness
 *
 *Return: void
 */

int get_endianness(void)
{
unsigned int j = 1;
char *c = (char *)&j;

if (*c)
return (1);
else
return (0);
}
