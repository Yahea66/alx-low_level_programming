#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age : Age of the dog. 
 * @owner: Owner of the dog. 
 *
 * Return: pointer to the new dog variable 
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
{
return (NULL);
}
ptr->name = name;
ptr->age = age;
ptr->owner = owner;
return (ptr);
}
