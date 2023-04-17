#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct for dog
 * struct dog
 * Description: struct for dog
 * @name: name of dog
 * @owner: owner of dog
 * @age: age of dog
*/
struct dog
{
char *name;
char *owner;
float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
