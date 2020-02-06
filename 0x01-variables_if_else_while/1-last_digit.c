#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main block
 *Description: get a random number and print the number
 *and if it is positif, negative, or zero
 *Return: 0
 */
int main(void)
{
int n, lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
/* your code goes there */
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
else
{
printf("Last digit of %d is %d and less than 6 and not 0\n", n, lastdigit);
}
return (0);
}
