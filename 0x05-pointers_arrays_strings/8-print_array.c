#include "holberton.h"
#include <stdio.h>

/**
 *print_array - print an array
 *@n: elements of array
 *@a: array pointer
 *
 *Return: nothing
 */

void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
{
printf("%d", a[b]);
if (b < (n - 1))
printf(", ");
}
printf("\n");
}
