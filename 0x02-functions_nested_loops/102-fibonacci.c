#include <stdio.h>
/**
 * main - main function
 * @void: parameters
 *Return: 0
 */
int main(void)
{
long long int a, b, x;
int i;
a = 1;
b = 2;

printf("%lld, ", a);
printf("%lld, ", b);

for (i = 3; i <= 50; i++)
{
x = a + b;
a = b;
b = x;
if (i != 50)
printf("%lli, ", x);
else
printf("%lli", x);
}
printf("\n");
return (0);
}
