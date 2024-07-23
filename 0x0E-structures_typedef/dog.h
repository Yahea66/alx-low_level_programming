/**
 * struct dog - dog info.
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 */

#ifndef DOG_H
#define DOG_H

struct dog
{
char *name;
float age;
char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif
