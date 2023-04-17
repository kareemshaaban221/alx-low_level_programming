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
 * _strcpy - function
 * @dest: pointer
 * @src: pointer
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
char *res = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (res);
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
char *nname = malloc(sizeof(char) * _strlen(name));
char *oowner = malloc(sizeof(char) * _strlen(owner));

if (!res || !name || !owner || !nname || !oowner)
{
free(res);
free(nname);
free(oowner);
return (NULL);
}

res->name = _strcpy(nname, name);
res->owner = _strcpy(oowner, owner);
res->age = age;

if (!res->name || !res->owner)
{
free(res);
free(nname);
free(oowner);
return (NULL);
}

free(nname);
free(oowner);

return (res);
}
