/**
*init_dog - initialize a variable of type struct dog
*@d: the struct variable 
*@name: Name of the dog 
*@age: Age of the dog
*@owner: Owner of the dog 
*
*Return: Void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d =! NULL) 
{
d->name = name;
d->age = age;
d->owner = owner;
} 
} 
