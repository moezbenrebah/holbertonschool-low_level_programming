#include "3-calc.h"


/**
 *main - performs simple operations
 *@argc: number of arguments passed
 *@argv: array of pointers to arguments
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{

int (*ptr)(int, int);
int n1, n2, n3;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

n1 = atoi(argv[1]);
n2 = atoi(argv[3]);

/* if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
{
printf("Error\n");
exit(99);
}*/
ptr = get_op_func(argv[2]);
n3 = ptr(n1, n2);

printf("%d\n", n3);
return (0);
}
