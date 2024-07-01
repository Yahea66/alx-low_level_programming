#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string
 *
 * Description: This function takes a pointer to a string and returns
 * the length of the string excluding the null terminator.
 *
 * Return: the length of the string as an integer
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
