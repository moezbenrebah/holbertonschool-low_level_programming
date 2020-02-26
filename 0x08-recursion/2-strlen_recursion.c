#include "holberton.h"

/**
 *_strlen_recursion - return the length of string
 *@s: string
 *
 *Return: length
 */

int _strlen_recursion(char *s)
{
int a;

if (*s == '\0')
return (0);

a = _strlen_recursion(s + 1) + 1;
return (a);
}
