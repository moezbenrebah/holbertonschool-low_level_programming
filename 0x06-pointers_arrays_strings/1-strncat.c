#include "holberton.h"

/**
 *_strncat - concatenate strings
 *@dest: destination
 *@src: source
 *@n: integer
 *
 *Return: destination
 */

char *_strncat(char *dest, char *src, int n)
{
int j = 0;
int i = 0;

while (dest[i] != '\0')
{
i++;
}

for (j = 0; src[j] != '\0'; j++)
{
if (j < n)
{
dest[j + i] = src[j];
}
else

dest[j + i] = '\0';
}
return (dest);
}
