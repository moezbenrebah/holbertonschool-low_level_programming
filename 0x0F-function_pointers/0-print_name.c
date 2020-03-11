#include "function_pointers.h"

/**
 *print_name - print the name
 *@name: string
 *@f: function to print with
 *
 *Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
if (name != '\0' && f != '\0')
f(name);
}
