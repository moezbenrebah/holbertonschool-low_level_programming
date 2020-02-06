#include <stdio.h>
/**
 * main - main function
 * Return: 0
 **/
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
if (a <= '8')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
