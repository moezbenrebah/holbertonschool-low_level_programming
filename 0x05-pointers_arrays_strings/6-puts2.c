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

for (i = 0; i <= str[i]; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
