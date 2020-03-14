#include "variadic_functions.h"

/**
 *print_strings - entry point
 *@separator: comma and space
 *@n: number of argument
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *c;

va_list argc;
va_start(argc, n);


while (i < n)
{
c = va_arg(argc, char*);

if (c == NULL)
printf("(nil)");
else
printf("%s", c);

if (i < (n - 1) && separator)
printf("%s", separator);

i++;
}
printf("\n");

va_end(argc);
}
