#include "holberton.h"

/**
 *puts2 - print every other charachter of a string
 *@str: string
 *
 *Return: nothing
 */

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
_putchar('\n');
}
