#include "dog.h"
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
for (i = 0; str[i]; i++)
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
/**
 *_strlen - compute the length
 *@s: array of character
 *
 *Return: integer
 */

int _strlen(char *s)
{
int i = 0;

while (s[i])
i++;

return (i);
}

/**
 *new_dog - structure
 *@name: array of character
 *@age: floate
 *@owner: array of character
 *
 *Return: string
 */

dog_t *new_dog(char *name, float age, char *owner)
{
int lenname = _strlen(name);
int lenowner = _strlen(owner);

dog_t *new_dog;

new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

new_dog->name = malloc(sizeof(char) * lenname);
new_dog->owner = malloc(sizeof(char) * lenowner);

new_dog->name = _strdup(name);
if (name == NULL)
{
free(new_dog);
return (NULL);
}

new_dog->owner = _strdup(owner);
if (owner == NULL)
{
free(name);
free(new_dog);
return (NULL);
}

new_dog->name = name;

new_dog->age = age;

new_dog->owner = owner;

return (new_dog);
}
