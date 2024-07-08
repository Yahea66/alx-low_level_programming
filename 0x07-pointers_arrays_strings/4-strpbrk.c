#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Description: The _strpbrk() function locates the first occurrence in the string s
 * of any of the bytes in the string accept.
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
return (char *)s;
}
}
s++;
}
return (NULL);
}
