#include "holberton.h"

/**
 *_puts - prints a string
 *@str: string
 *
 *Return : nothing
 */

void _puts(char *str)
{

while (*(str + 1))
{
putchar(str[0]);
str++;
}
putchar('\n');
}
