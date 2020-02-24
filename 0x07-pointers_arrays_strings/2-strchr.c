#include "holberton.h"

/**
 *_strchr - locates character in a string
 *@s: string
 *@c: character
 *
 *Return: 0
 */

char *_strchr(char *s, char c)
{
int i = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (*(s + i) == c)
return (s + i);
i++;
}
return (0);
}
