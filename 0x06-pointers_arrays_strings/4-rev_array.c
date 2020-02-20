#include "holberton.h"

/**
 *reverse_array - reversing array
 *@a: integer
 *@n: integer
 *
 *Return: nothing
 */

void reverse_array(int *a, int n)
{
int i = 0;
int b = 0;
int j = 0;
n -= 1;

while (i < n)
{
j = a[i];
b = a[n];
a[n] = j;
a[i] = b;
i++;
n--;
}
}
