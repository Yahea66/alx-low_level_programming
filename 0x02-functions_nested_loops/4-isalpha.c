#include "main.h"

/**
 * _islower - checks for alphabetic char. 
 * Return: 0 or 1
 */
int _isalpha(int c)
{
char lower;
char upper;
int l = 0;
int u = 0;
for (lower = 'a'; lower <= 'z'; lower++)
{
if (lower == c) 
{
l = 1;
}
}
for (upper = 'A'; upper <= 'Z'; upper++)
{
if (upper == c) 
{
u = 1;
}
}
return (l + u);
}
