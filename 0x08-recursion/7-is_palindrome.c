#include"holberton.h"
#include<stdio.h>
/**
 * _strlen_recursion - length str
 * @str: pointer
 *
 * Return: int
 */
int _strlen_recursion(char *str)
{
int a;
if (*str == '\0')
return (0);
str++;
a = 1 + _strlen_recursion(str);
return (a);
}
/**
 * _palindrome - function
 * @i: intger
 * @l: integer
 * @p: pointer
 *
 * Return: integer
 */
int _palindrome(int l, int i, char *p)
{
if (i > l / 2)
return (1);
else if (p[i] != p[l - i - 1])
return (0);
else
return (_palindrome(l, i + 1, p));
}
/**
 * is_palindrome - function
 * @s: pointer
 *
 * Return: int
 */
int is_palindrome(char *s)
{
int b;
int y;
b = _strlen_recursion(s);
y = _palindrome(b, 0, s);
return (y);
}
