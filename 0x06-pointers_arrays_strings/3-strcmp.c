#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: pointer to the first string
 * @s1: pointer to the second string
 *
 * Description: This function compares 2 strings
 * returns 0 if the 2 strings are equal, 
 * positive number if s1 > s2 and negative  vise verse 
 *
 * Return: the difference in ASCII values. 
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && (s1 == s2)) 
{
s1++;
s2++;
}
return (*s1 - *s2);
} 
