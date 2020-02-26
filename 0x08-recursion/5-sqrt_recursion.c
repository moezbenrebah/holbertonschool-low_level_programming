#include "holberton.h"

/**
 *square - square conditions
 *_sqrt_recursion - return the natural square
 *@i: integer
 *@n: integer
 *
 *Return: square of number
 */

int square(int i, int n)
{
if (i * i == n)
return (i);
else if (i < n)
return (square(i + 1, n));
else
return (-1);
}

int _sqrt_recursion(int n)
{
return (square(1, n));
}
