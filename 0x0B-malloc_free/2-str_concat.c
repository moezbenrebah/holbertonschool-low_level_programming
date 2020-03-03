#include "holberton.h"
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - concatenate strings
 *@s1: string
 *@s2: string
 *
 *Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
int i, j, h, a = 0;
char *c;

i = strlen(s1);
j = strlen(s2);
h = i + j + 1;
c = malloc(sizeof(char) * h);

while (*s1 != '\0')
{
c[a] = *s1;
s1++;
a++;
}

while (*s2 != '\0')
{
c[a] = *s2;
s2++;
a++;
}
c[a] = '\0';

return (c);
}
