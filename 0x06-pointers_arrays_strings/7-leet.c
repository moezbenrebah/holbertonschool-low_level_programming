#include "holberton.h"

/**
 *leet - encode strings
 *@a: array
 *
 *Return: a
 */

char *leet(char *a)
{
char s[] = "aAeEoOtTlL";
char p[] = "4433007711";

int i = 0;
int j = 0;

while (a[i] != '\0')
{
for (j = 0; s[j] != '\0' && a[i] != s[j]; j++)
;
if (j < 10)
{
a[i] = p[j];
}
i++;
}
return (a);
}
