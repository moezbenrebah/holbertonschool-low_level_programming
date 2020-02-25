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

for (i = 0; x[i] != '\0'; i++, x++)

if (*x == c)
return ((char *)x);

return (0);
}
