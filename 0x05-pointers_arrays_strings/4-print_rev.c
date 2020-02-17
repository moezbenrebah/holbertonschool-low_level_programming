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

for (i = 0; s[i]; i++)
;
while (i)
{
putchar(s[i]);
i--;
}
putchar('\n');
}
