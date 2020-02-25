#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - prints the sum of the two diagonals
 *@a: string
 *@size: size of square
 *
 *Return: nothing
 */
void print_diagsums(int *a, int size)
{
int x, y, sum1, sum2;
sum1 = 0;
sum2 = 0;

for (x = 0; x < size; x++)

sum1 += a[(size + 1) * x];

for (y = 0; y < size; y++)

sum2 += a[(size - 1) * (y + 1)];

printf("%d, %d\n", sum1, sum2);
}
