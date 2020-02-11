#include "holberton.h"
/**
*times_table - print times table
*/

void times_table(void)
{
int a, b;

for (a = 0; a < 10; a++)
{
_putchar('0');
_putchar(',');
for (b = 0; b < 10; b++)
{
_putchar(' ');
if (a * b < 10)
{
_putchar(' ');
_putchar((a * b) + '0');
}
else
{
_putchar((a * b) / 10 + '0');
_putchar((a * b) % 10 + '0');
}
if (b < 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
