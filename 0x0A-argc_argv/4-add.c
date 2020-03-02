#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds numbers
 *@argc: number of arguments
 *@argv: argument vector of pointers to strings
 *
 *Return: 0 if no errors, else 1
 */

int main(int argc, char *argv[])
{
int i, j, sum;
sum = 0;

if (argc < 1)
printf("0\n");

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
