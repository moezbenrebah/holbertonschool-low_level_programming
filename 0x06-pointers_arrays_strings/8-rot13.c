#include "holberton.h"

/**
 *rot13 - encode characters
 *@k: array of characters
 *
 *Return: array k
 */

char *rot13(char *k)
{
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

int i = 0;
int j = 0;

while (k[i] != '\0')
{
for (j = 0; a[j] != '\0' && k[i] != a[j]; j++)
;
if (j < 52)
{
k[i] = b[j];
}
i++;
}
return (k);
}
