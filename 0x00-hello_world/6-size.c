#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
int longintType;
int longlongintType;
float floatType;
/* sizeof evaluates the size of a variable */
printf("Size of char: %d byte\n", sizeof(char));
printf("Size of int: %d bytes\n", sizeof(int));
printf("Size of longint: %d bytes\n", sizeof(long int));
printf("Size of longlongint: %d bytes\n", sizeof(longlong int));
printf("Size of float: %d bytes\n", sizeof(float));
return (0);
}
