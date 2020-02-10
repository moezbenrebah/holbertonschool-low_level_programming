#include <stdio.h>
#include "holberton.h"
/**
 *print_alphabet - display character
 *Return: 0
 */
void print_alphabet(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
}
