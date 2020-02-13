#include "holberton.h"

/**
 *print_diagonal - print diagonal shape
 *@n: integer
 *Return: nothing
 */

void print_diagonal(int n)
{

int a;
int b;

if (n > 0)
{
for (a = 1; a <= n; a++)
{
for (b = 1; b <= a; b++)
{
if (a != b)
_putchar(' ');
if (b == a)
{
_putchar(92);
_putchar('\n');
}
}
}
}
else
_putchar('\n');
}
