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
i = 0;

while (str[i])
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
