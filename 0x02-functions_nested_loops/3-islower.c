#include "main.h"

/**
 * _islower - checks for lowercase char.
 * Return: 0 or 1
 */
int _islower(int c)
{
char i;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
{
lower = 1;
}
}
return (lower);
}
