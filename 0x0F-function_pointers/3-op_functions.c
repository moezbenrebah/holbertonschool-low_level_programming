#include "3-calc.h"

/**
 *op_add - add two numbers a and b
 *@a: integer
 *@b: integer
 *
 *Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

/**
 *op_sub - subtracts b from a
 *@a: number 1
 *@b: number 2
 *
 *Return: difference between a and b
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 *op_mul - multiplies a and b
 *@a: number 1
 *@b: number 2
 *
 *Return: multiplication of a and b
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 *op_div - divides a by b
 *@a: number 1
 *@b: number 1
 *
 *Return: integer of division between a and b
 */

int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
 *op_mod - find the remainder of the division of a by b
 *@a: number 1
 *@b: number 1
 *
 *Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
