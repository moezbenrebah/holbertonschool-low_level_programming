#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - multipling function
 *@argc: count of the arguments supplied to the program
 *@argv: array of pointers to the strings
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
int i, j, c;
i = 1;
j = 2;
c = 3;
if (argc != c)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[i]) * atoi(argv[j]));
return (0);
}
