#include "holberton.h"
#include <stdio.h>

/**
 *main - Entry point
 *@argc: count of the arguments supplied to the program
 *@argv: array of pointers to the strings
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
