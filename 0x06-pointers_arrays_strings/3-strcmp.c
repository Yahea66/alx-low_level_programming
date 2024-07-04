#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Description: This function compares 2 strings
 * returns 0 if the 2 strings are equal,
 * positive number if s1 > s2, and negative vice versa.
 *
 * Return: the difference in ASCII values.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
