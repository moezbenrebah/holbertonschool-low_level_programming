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
char *x = s;

for (i = 0; x[i] != '\0'; i++)

if (*(x + i) == c)
return (x + i);

return (0);
}
