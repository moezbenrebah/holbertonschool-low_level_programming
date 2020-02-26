#include "holberton.h"

/**
 *prime - check for prime numbers
 *@i: integer
 *@n:integer
 *
 *Return: integer
 */

int prime(int i, int n)
{
if (n < 2 || !(n % i))
return (0);
else if (i > n / 2)
return (1);
else
return (prime(i + 1, n));
}

/**
 *is_prime_number - check for prime numbers
 *@n: integer
 *
 *Return: integer
 */

int is_prime_number(int n)
{
return (prime(2, n));
}
