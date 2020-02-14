#include <math.h>
#include <stdio.h>
/**
 *main - main block
 *Return: 0
 */

int main(void)
{
long int a = 612852475143;
int x;

for (x = 3; x <= sqrt(a); x++)
{
if (a % x == 0)
a = a / x;
}
printf("%li\n", a);
return (0);
}
