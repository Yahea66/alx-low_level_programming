#include "main.h"

/**
 * puts2 - prints a char and leaves one
 * @str: pointer to a string
 *
 * Description: This function takes a pointer to a string,
 * prints every other character of a string
 */
void puts2(char *str)
{
int length = 0;
int i;
while (str[length] != '\0')
{
length++;
}
for (i = 0; i < length ; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
