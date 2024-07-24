#include <stdlib.h>
/**
 * print_name - prints a name.
 * @name: pointer to a string to be printed
 * @f: pointer to a function 
 *
 * Return: Void 
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL) 
{
return;
} 
f(name);
} 
