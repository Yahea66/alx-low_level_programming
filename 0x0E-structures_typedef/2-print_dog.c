#include <stdio.h>
#include <stddef.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: the struct variable
 *
 * Return: Void
 */
void print_dog(struct dog *d)
{
if (d != NULL) 
{
if (d->name == NULL) 
{
printf("Name: (nil)\n");
} 
else
{
printf("Name: %s\n", d->name);
}

printf("Age: %.6f\n", d->age);

if (d->owner == NULL) 
{
printf("Owner: (nil)\n");
} 
else
{
printf("Owner: %s\n", d->owner);
}
}
}
