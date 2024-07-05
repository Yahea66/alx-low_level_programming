#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 *
 * Description: This function prints the numbers from 0 to 14, ten times,
 * followed by a newline.
 *
 * Return: void
 */
void more_numbers(void)
{
int i, d;
for (d = 0; d < 10; d++)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
_putchar(i / 10 + '0');
} 
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
