#include "main.h"

/**
 * puts2 - prints half of a string
 * @str: pointer to a string
 *
 * Description: This function takes a pointer to a string,
 * prints the second half of the string
 */
void puts_half(char *str)
{
int length = 0;
int i;
while (str[length] != '\0')
{
length++;
}
for (i = length/2; i < length ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
