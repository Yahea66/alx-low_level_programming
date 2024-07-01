#include "main.h"

/**
 * int _strlen - returns the length of a string. integers.
 * @s: pointer to a string
 *
 * Return: int
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
