#include "holberton.h"

/**
 *print_number - display digits
 *@n: integer
 *Return: nothing
 */

void print_number(int n)
{

if (n < 0)
{
_putchar('-');
n = -n;
}

if (n >= 1000)
{
_putchar((n / 1000) + '0');
_putchar(((n % 1000) / 100) + '0');
_putchar(((n % 100) / 10) + '0');
_putchar((n % 10) + '0');
}

if ((n >= 100) && (n < 1000))
{
_putchar((n / 100) + '0');
_putchar(((n % 100) / 10) + '0');
_putchar((n % 10) + '0');
}

if ((n >= 10) && (n < 100))
{
_putchar((n / 10) + '0');
_putchar((n % 10) + '0');
}
if (n < 9 && n >= 0)
{
_putchar(n % 10 + '0');
}
}
