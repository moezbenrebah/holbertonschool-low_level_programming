#include <stdio.h>
/**
 * main - main function
 * Return: 0
 **/
int main(void)
{
int c, C;
c = '0';
C = 'a';
while (c <= '9')
{
putchar(c);
c++;
}
while (C <= 'f')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
