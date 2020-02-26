#include "holberton.h"
/**
 *_print_rev_recursion - print string in reverse
 *@s: string
 *
 *Return: nothing
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(s[0]);
}
