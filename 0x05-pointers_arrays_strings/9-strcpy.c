#include "holberton.h"
#include <stdio.h>

/**
 *_strcpy - copy string including the terminating null byte
 *@dest: destination of string
 *@src: source of string
 *
 *Return: the value dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
i++;

for (i = 0; src[i]; i++)
dest[i] = src[i];

return (dest);
}