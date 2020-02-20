#include "holberton.h"

/**
 *cap_string - capitalize characters
 *@s: string
 *
 *Return: string
 */

char *cap_string(char *s)
{
int i = 0;
int j;
char spc[] = {' ', '\t', '\n', ',', ';', '.', '!', '"', '(', ')', '{', '}'};

while (s[i] != '\0')
{
for (j = 0; spc[j] != '\0'; j++)
{
if (s[i - 1] == spc[j] && s[i] <= 122 && s[i] >= 97)
s[i] = s[i] - 32;
}
i++;
}
return (s);
}
