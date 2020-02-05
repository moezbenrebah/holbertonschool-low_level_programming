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
printf("Size of char: %ld byte\n", sizeof(charType));
printf("Size of int: %ld bytes\n", sizeof(intType));
printf("Size of longint: %ld bytes\n", sizeof(longintType));
printf("Size of longlongint: %ld bytes\n", sizeof(longlongintType));
printf("Size of float: %ld bytes\n", sizeof(floatType));
return (0);
}
