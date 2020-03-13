#include "variadic_functions.h"

/**
 *sum_them_all - computes the sum of all parameters
 *@n: parameter number
 *
 *Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
va_list argptr;

if (n == 0)
{
return (0);
}

va_start(argptr, n);

while (i < n)
{
sum += va_arg(argptr, int);
i++;
}
va_end(argptr);

return (sum);
}
