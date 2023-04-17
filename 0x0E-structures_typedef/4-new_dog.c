#include <stdio.h>
#include "dog.h"

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
dog_t *res;
char *nname;
char *oowner;

res->name = _strcpy(nname, name);
res->owner = _strcpy(oowner, owner);
res->age = age;

return (res);
}
