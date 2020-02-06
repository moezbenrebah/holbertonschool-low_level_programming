#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main block
 *Description: get a random number and print the number
 *and if it is positif, negative, or zero
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positif\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
