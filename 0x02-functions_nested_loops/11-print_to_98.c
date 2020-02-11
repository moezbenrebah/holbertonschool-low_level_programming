#include "holberton.h"
#include <stdio.h>

/**
 *void print_to_98 - display numbers
 *@n: print digit
 * Return: no return
 */

void print_to_98(int n)
{
if (n <= 98)
{
for (n = n; n <= 97; n++)
printf("%d, ", n);
}
else
for (n = n; n > 98; n--)
printf("%d, ", n);
printf("98 \n");
}

