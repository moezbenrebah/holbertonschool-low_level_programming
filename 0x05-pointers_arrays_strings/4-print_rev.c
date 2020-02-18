#include "holberton.h"

/**
 *print_rev - print strings in reverse
 *@s: characters
 *
 *Return: nothing
 */

void print_rev(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
;
while (i)
{
_putchar(s[i - 1]);
i--;
}
_putchar('\n');
}
