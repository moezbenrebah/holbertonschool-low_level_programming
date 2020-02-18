#include "holberton.h"

/**
 *swap_int - swap numbers function
 *@a: integer
 *@b: integer
 *
 *Return: nothing
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
