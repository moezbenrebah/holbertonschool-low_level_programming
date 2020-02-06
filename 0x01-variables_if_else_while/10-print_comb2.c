#include <stdio.h>
/**
*main - void
*Return: 0
*/
int main(void)
{
int n = 0;
for (n = 0 ; n < 100 ; n++)
{
putchar((n / 10) + '0');
putchar((n % 10) + '0');
if (n != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
