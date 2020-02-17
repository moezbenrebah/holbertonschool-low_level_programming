#include "holberton.h"

/**
 *rev_string - print string in reverse
 *@s: pointer
 *
 *Return: nothing
 */

void rev_string(char *s)
{
int i, l, len = 0;
char c;

while (s[len])
{
len++;
l = len - 1;
}

for (i = 0; i < len / 2; i++)
{
c = s[i];
s[i] = s[l];
s[l] = c;
l--;
}
}
