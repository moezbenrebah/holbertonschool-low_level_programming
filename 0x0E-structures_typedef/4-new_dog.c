#include "dog.h"
#include <stdlib.h>

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
if (name == NULL)
return (NULL);

new_dog->owner = malloc(sizeof(char) * lenowner);
if (owner == NULL)
return (NULL);

new_dog->name = name;
if (name == NULL)
{
free(name);
free(new_dog);
}

new_dog->age = age;

new_dog->owner = owner;
if (owner == NULL)
{
free(owner);
free(new_dog);
}

return (new_dog);
}
