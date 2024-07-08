#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: pointer to the main string
 * @needle: pointer to the substring to be searched
 *
 * Description: The _strstr() function finds the first occurrence of the
 * substring needle in the string haystack. The terminating null bytes (\0)
 * are not compared.
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;
if (*needle == '\0')
return (haystack);
while (*haystack)
{
h = haystack;
n = needle;
while (*n && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (NULL);
}
