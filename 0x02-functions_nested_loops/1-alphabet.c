#include <stdio.h>
#include "holberton.h"
/**
 *print_alphabet - display character
 *Return: 0
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
