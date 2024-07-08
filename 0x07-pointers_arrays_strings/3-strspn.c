#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to a string
 * @accept: pointer to a string
 *
 * Description: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int len = 0;
int i, found;
while (*s)
{
found = 0;
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
len++;
found = 1;
break;
}
}
if (!found)
break;
s++;
}
return (len);
}
