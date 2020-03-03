#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - duplicate a string
 *@str: string
 *
 *Return: pointer to newely allocated space in memory
 */

char *_strdup(char *str)
{
char *str1;
int i, j;

if (str == NULL)
{
return (NULL);
}
for (i = 0; i <= *str; i++)
{
;
}
i++;
str1 = malloc(sizeof(char) * i);

if (str1 == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
str1[j] = str[j];

return (str1);
}
