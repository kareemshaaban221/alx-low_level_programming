#include <stdio.h>
#include "dog.h"

/**
 * print_dog - printing
 * @d: d
 * Return: void
*/
void print_dog(struct dog *d)
{
if (d)
{
if (d->name)
printf("Name: %s\n", d->name);
else
printf("Name: (nil)");

if (d->age)
printf("Age: %.6f\n", d->age);
else
printf("Age: (nil)");

if (d->owner)
printf("Owner: %s\n", d->owner);
else
printf("Owner: (nil)");
}
}
