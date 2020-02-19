#include "holberton.h"
#include <stdio.h>

/**
 *puts_half - print half string
 *@str: string
 *
 *Return: nothing
 */

void puts_half(char *str)
{
int i = 0;
int j = 0;

while (str[i] != '\0')
{
i++;
}
for (j = 0; str[j] != '\0'; j++)
{
if (j > i / 2)
_putchar(str[j]);
}
_putchar('\n');
}
