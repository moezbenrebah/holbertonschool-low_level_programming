#include "holberton.h"
/**
 *main - main block
 *Return: 0
 */
void print_alphabet(void)
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}
