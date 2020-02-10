#include "holberton.h"
#include <ctype.h>
/**
 *_islower - check for lowercase alphabet
 *@c: the character to print
 *Return: 0
 */
int _islower(int c)
{
if (islower(c))
{
return (1);
}
return (0);
}
