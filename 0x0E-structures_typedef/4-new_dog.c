#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function
 * @s: pointer
 * Return: int len
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}

return (len);
}

/**
 * new_dog - create a new
 * @name: the name of the
 * @age: the age of the
 * @owner: the owner of the
 * Return: the new
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *res = malloc(sizeof(dog_t));
int i;

if (!res || !name || !owner)
{
free(res);
return (NULL);
}

res->name = malloc(strlen(name) + 1);
res->owner = malloc(strlen(owner) + 1);

if (!res->name || !res->owner)
{
free(res->name);
free(res->owner);
free(res);
return (NULL);
}

for (i = 0; i < _strlen(name); i++)
res->name[i] = name[i];

res->name[i] = '\0';

for (i = 0; i < _strlen(owner); i++)
res->owner[i] = owner[i];

res->owner[i] = '\0';

res->age = age;

return (res);
}
