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
else if (i > n / 2)
return (-1);
else
return (square(i + 1, n));
}

int _sqrt_recursion(int n)
{
return (square(1, n));
}
