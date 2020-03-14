#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers
 *@separator: string
 *@n: integer
 *
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list argp;
va_start(argp, n);


while (i < n)
{
printf("%d", va_arg(argp, int));

if (i < (n - 1) && separator)
printf("%s", separator);
i++;
}
printf("\n");

va_end(argp);
}
