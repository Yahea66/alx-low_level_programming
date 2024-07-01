#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: pointer to a string
 *
 * Description: This function takes a pointer to a string
 * reserve it and update it with the new reserved value
 */
void rev_string(char *s)
{
int length = 0;
int i;
char temp;
while (s[length] != '\0')
{
length++;
} 
for (i = 0; i < length/2; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
