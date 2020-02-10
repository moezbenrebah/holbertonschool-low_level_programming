#include <stdio.h>
#include "holberton.h"
/**
 *main - main block
 *Return: 0
 */
void print_alphabet(void);
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
