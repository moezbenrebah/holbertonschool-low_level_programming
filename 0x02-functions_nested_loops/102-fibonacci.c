#include <stdio.h>
/**
 * main - main function
 * @void: parameters
 *Return: 0
 */
int main(void)
{
long int a, b, x;
int i;
a = 1;
b = 2;

printf("%ld, ", a);
printf("%ld, ", b);

for (i = 3; i <= 50; i++)
{
x = a + b;
a = b;
b = x;
if (i != 50)
printf("%li, ", x);
else
printf("%li", x);
}
printf("\n");
return (0);
}
