#ifndef _FUNCTION_H
#define _FUNCTION_H
#include <unistd.h>

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size_t size, void (*action)(int));

#endif
