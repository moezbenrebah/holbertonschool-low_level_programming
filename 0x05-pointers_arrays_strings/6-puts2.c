#include "holberton.h"

/**
 *puts2 - print every other charachter of a string
 *@str: string
 *
 *Return: nothing
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i]; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
