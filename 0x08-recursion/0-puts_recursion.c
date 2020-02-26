#include "holberton.h"

/**
 *_puts_recursion - print string
 *@s: string
 *
 *Return: nothing
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(s[0]);
_puts_recursion(s + 1);
}
