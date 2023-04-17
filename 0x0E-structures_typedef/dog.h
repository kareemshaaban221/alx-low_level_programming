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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
