
#include "holberton.h"

/**
 *print_line - check for the value of n
 *@n: integer
 *Return: no return
 */

void print_line(int n)
{
int a = '_';
int b;

for (b = 0; b < n; b++)
{
if (n <= 0)
_putchar('\n');
else
_putchar(a);
}
_putchar('\n');
}
